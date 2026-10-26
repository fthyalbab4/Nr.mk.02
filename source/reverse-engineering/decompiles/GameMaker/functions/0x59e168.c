// rea decompile_all
// name: FUN_0059e168
// address: 0x59e168
// body: available
// range: 0x59e168-0x59e1a7 inclusive
// range: 0x59e1c4-0x59e544 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59e190 (push 0x59e545 followed by fs-segment stack chaining); handler 0x59e545 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0059e47c) */
/* WARNING: Removing unreachable block (ram,0x0059e3df) */
/* WARNING: Removing unreachable block (ram,0x0059e438) */
/* WARNING: Removing unreachable block (ram,0x0059e43b) */
/* WARNING: Removing unreachable block (ram,0x0059e33e) */
/* WARNING: Removing unreachable block (ram,0x0059e37e) */
/* WARNING: Removing unreachable block (ram,0x0059e373) */
/* WARNING: Removing unreachable block (ram,0x0059e387) */
/* WARNING: Removing unreachable block (ram,0x0059e2ab) */
/* WARNING: Removing unreachable block (ram,0x0059e2f4) */
/* WARNING: Removing unreachable block (ram,0x0059e2f7) */
/* WARNING: Removing unreachable block (ram,0x0059e267) */
/* WARNING: Removing unreachable block (ram,0x0059e228) */
/* WARNING: Removing unreachable block (ram,0x0059e1df) */
/* WARNING: Removing unreachable block (ram,0x0059e21d) */
/* WARNING: Removing unreachable block (ram,0x0059e216) */
/* WARNING: Removing unreachable block (ram,0x0059e21b) */
/* WARNING: Removing unreachable block (ram,0x0059e23c) */
/* WARNING: Removing unreachable block (ram,0x0059e26a) */
/* WARNING: Removing unreachable block (ram,0x0059e4c8) */
/* WARNING: Removing unreachable block (ram,0x0059e4cb) */

void FUN_0059e168(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  iVar2 = 4;
  do {
    local_c = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_0059e545;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_8 = param_2;
  switch(param_2) {
  case 0:
    local_20 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00781958,&local_c);
    FUN_00592d3c(local_c,&stack0xffffffec,0);
    break;
  default:
    local_20 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00781958,&local_28);
    FUN_00592d3c(local_28,&stack0xffffffec,0);
    break;
  case 2:
    local_20 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00781958,&stack0xffffffe8);
    FUN_00592d3c(unaff_ESI,&stack0xffffffec,0);
    break;
  case 3:
    local_20 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00781958,&stack0xffffffe4);
    FUN_00592d3c(unaff_EDI,&stack0xffffffec,0);
    break;
  case 4:
    local_20 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00781958,&local_20);
    FUN_00592d3c(local_20,&stack0xffffffec,0);
    break;
  case 6:
    FUN_0040b75c(PTR_PTR_00781958,&local_24);
    FUN_00592d3c(local_24,&stack0xffffffec,0);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0059e54c;
  local_24 = (undefined1 *)0x59e53c;
  thunk_FUN_00406e80(&local_28,5,puVar1);
  local_24 = (undefined1 *)0x59e544;
  thunk_FUN_00406e5c(&local_c);
  return;
}
