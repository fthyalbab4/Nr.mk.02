// rea decompile_all
// name: FUN_0073d140
// address: 0x73d140
// body: available
// range: 0x73d140-0x73d1ed inclusive
// range: 0x73d23f-0x73d31f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73d156 (push 0x73d320 followed by fs-segment stack chaining); handler 0x73d320 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073d140(void)

{
  undefined1 *puVar1;
  char cVar2;
  HMODULE pHVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_30;
  _SYSTEM_INFO local_2c;
  undefined4 local_8;

  puStack_64 = &stack0xfffffffc;
  local_8 = 0;
  puStack_68 = &LAB_0073d320;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  FUN_00738660(&local_2c,0x24);
  GetSystemInfo(&local_2c);
  _DAT_00780b8c = local_2c.dwNumberOfProcessors;
  _DAT_00780b90 = local_2c.dwAllocationGranularity;
  _DAT_00780b94 = local_2c.dwPageSize;
  DAT_00780470 = *(int *)PTR_DAT_00782944 == 2;
  pHVar3 = GetModuleHandleW(L"kernel32.dll");
  FUN_007365dc(pHVar3,&local_8);
  local_30 = 0;
  if ((DAT_00780470 == '\0') && (cVar2 = FUN_0073684c(local_8,local_60), cVar2 != '\0')) {
    DAT_007a5020 = local_50;
  }
  else {
    DAT_007a5020 = 0;
  }
  uVar4 = FUN_0073ce4c();
  puVar1 = puStack_64;
  switch(uVar4 & 0x7f) {
  case 1:
    DAT_0078045c = 1;
    break;
  case 2:
    DAT_00780460 = 1;
    break;
  case 3:
    DAT_00780464 = 1;
    break;
  case 4:
    DAT_00780468 = 1;
    break;
  case 5:
    DAT_0078046c = 1;
    break;
  case 6:
    DAT_00780474 = 1;
    DAT_00780478 = 1;
    break;
  case 7:
    DAT_00780474 = 1;
    DAT_0078047c = 1;
    break;
  case 8:
    DAT_00780474 = 1;
    DAT_0078047c = 1;
    DAT_00780480 = 1;
    break;
  case 9:
    DAT_00780484 = 1;
    break;
  case 10:
    DAT_00780488 = 1;
    break;
  case 0xb:
    DAT_0078048c = 1;
    break;
  case 0xc:
    DAT_00780490 = 1;
    break;
  case 0xd:
    DAT_00780494 = 1;
    break;
  case 0xe:
    DAT_00780498 = 1;
    break;
  case 0xf:
    DAT_0078049c = 1;
    break;
  case 0x10:
    DAT_007804a0 = 1;
    break;
  case 0x11:
    DAT_007804a4 = 1;
    break;
  case 0x12:
    DAT_007804a8 = 1;
  }
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_0073d327;
  puStack_68 = (undefined1 *)0x73d31f;
  thunk_FUN_00406e5c(&local_8,uStack_6c,puVar1);
  return;
}
