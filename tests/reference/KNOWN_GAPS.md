# Known gaps observed during the unified merge

The typed frontend was extended in-place (without replacing the core parser) with block statements, `if/else`, `while`, `do/until`, `for`, `repeat`, `break`, and `continue`. The current reference fixtures cover the subset that has been implemented; this only closes a parser/runtime integration gap for these cases.

Still not implemented or not established by the current typed frontend/tests: `switch`, `with`, ternary expressions, compound assignments such as `+=`, the broader GameMaker lexer/parser grammar, full instance/global scope semantics, and all event/action behavior. These are explicit follow-up tasks; the evaluator path and typed VM remain separate contracts.

Passing these authored fixtures is not Windows parity. Full built-in signatures, coercions, side effects, resource references, real GMK scripts, and Android runtime results still need independent tests against the Windows reference.
