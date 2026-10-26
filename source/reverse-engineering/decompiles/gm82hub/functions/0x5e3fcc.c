// rea decompile_all
// name: FUN_005e3fcc
// address: 0x5e3fcc
// body: available
// range: 0x5e3fcc-0x5e400b inclusive
// range: 0x5e4028-0x5e43a8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e3ff4 (push 0x5e43a9 followed by fs-segment stack chaining); handler 0x5e43a9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005e42e0) */
/* WARNING: Removing unreachable block (ram,0x005e4243) */
/* WARNING: Removing unreachable block (ram,0x005e429c) */
/* WARNING: Removing unreachable block (ram,0x005e429f) */
/* WARNING: Removing unreachable block (ram,0x005e41a2) */
/* WARNING: Removing unreachable block (ram,0x005e41e2) */
/* WARNING: Removing unreachable block (ram,0x005e41d7) */
/* WARNING: Removing unreachable block (ram,0x005e41eb) */
/* WARNING: Removing unreachable block (ram,0x005e410f) */
/* WARNING: Removing unreachable block (ram,0x005e4158) */
/* WARNING: Removing unreachable block (ram,0x005e415b) */
/* WARNING: Removing unreachable block (ram,0x005e40cb) */
/* WARNING: Removing unreachable block (ram,0x005e408c) */
/* WARNING: Removing unreachable block (ram,0x005e4043) */
/* WARNING: Removing unreachable block (ram,0x005e4081) */
/* WARNING: Removing unreachable block (ram,0x005e407a) */
/* WARNING: Removing unreachable block (ram,0x005e407f) */
/* WARNING: Removing unreachable block (ram,0x005e40a0) */
/* WARNING: Removing unreachable block (ram,0x005e40ce) */
/* WARNING: Removing unreachable block (ram,0x005e432c) */
/* WARNING: Removing unreachable block (ram,0x005e432f) */

void FUN_005e3fcc(undefined4 param_1,undefined4 param_2)

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
  local_24 = &LAB_005e43a9;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_8 = param_2;
  switch(param_2) {
  case 0:
    local_20 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688b00,&local_c);
    FUN_005d8ba0(local_c,&stack0xffffffec,0);
    break;
  default:
    local_20 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688b00,&local_28);
    FUN_005d8ba0(local_28,&stack0xffffffec,0);
    break;
  case 2:
    local_20 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688b00,&stack0xffffffe8);
    FUN_005d8ba0(unaff_ESI,&stack0xffffffec,0);
    break;
  case 3:
    local_20 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688b00,&stack0xffffffe4);
    FUN_005d8ba0(unaff_EDI,&stack0xffffffec,0);
    break;
  case 4:
    local_20 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00688b00,&local_20);
    FUN_005d8ba0(local_20,&stack0xffffffec,0);
    break;
  case 6:
    FUN_0040b9d0(PTR_LAB_00688b00,&local_24);
    FUN_005d8ba0(local_24,&stack0xffffffec,0);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005e43b0;
  local_24 = (undefined1 *)0x5e43a0;
  thunk_FUN_004072fc(&local_28,5,puVar1);
  local_24 = (undefined1 *)0x5e43a8;
  thunk_FUN_004072d8(&local_c);
  return;
}
