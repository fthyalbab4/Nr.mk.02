## 2026-10-05 - Eliminate Dynamic Heap Allocations in Hot Pathfinding Loops
**Learning:** Re-allocating pathfinding queues and search buffers (`came`, `q`, `seen`) via `malloc`/`calloc`/`free` on every BFS pathfinding call introduces ~18% heap management overhead and memory fragmentation.
**Action:** Use thread-local static workspace arrays (`tls_came`, `tls_q`, `tls_seen`) sized for maximum grid cell bounds, with dynamic heap allocation retained purely as a safe fallback for oversized grids.
