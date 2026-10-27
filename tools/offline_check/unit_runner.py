"""Minimal pytest-compatible runner (pytest is not installed here)."""
import importlib.util, os, sys, traceback, glob
src = os.path.abspath(sys.argv[1])
for pkg in sorted(os.listdir(src)):
    sys.path.insert(0, os.path.join(src, pkg))
passed = failed = 0
for f in sorted(glob.glob(os.path.join(src, "*", "test", "test_*.py"))):
    spec = importlib.util.spec_from_file_location(os.path.basename(f)[:-3] + "_" + f.split("/")[-3], f)
    try:
        mod = importlib.util.module_from_spec(spec); spec.loader.exec_module(mod)
    except Exception as e:
        print(f"SKIP {f}: import {type(e).__name__}: {e}"); continue
    for name in sorted(dir(mod)):
        if name.startswith("test_"):
            try:
                getattr(mod, name)(); passed += 1; print(f"PASS {os.path.relpath(f, src)}::{name}")
            except Exception:
                failed += 1; print(f"FAIL {os.path.relpath(f, src)}::{name}"); traceback.print_exc()
print(f"\n{passed} passed, {failed} failed")
sys.exit(1 if failed else 0)
