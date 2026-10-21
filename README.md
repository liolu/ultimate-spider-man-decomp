# Ultimate Spider-Man decompilation (FRA)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/ultimate-spider-man-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/ultimate-spider-man-decomp) [![Data](https://bytematch.dev/liolu/ultimate-spider-man-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/ultimate-spider-man-decomp) [![Functions](https://bytematch.dev/liolu/ultimate-spider-man-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/ultimate-spider-man-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `AUSF`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`███████░░░░░░░░░░░░░` **32.86%** of the code matched · data 0.00% · 2503/4593 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 2503 | 2503/2503 | 32.86% |

*Updated 2026-10-22 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py fra
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
