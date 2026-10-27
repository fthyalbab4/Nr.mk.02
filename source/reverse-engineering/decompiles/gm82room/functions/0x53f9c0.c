// rea decompile_all
// name: FUN_0053f9c0
// address: 0x53f9c0
// body: available
// range: 0x53f9c0-0x53fa6d inclusive
// range: 0x53fabf-0x53fb9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53f9d6 (push 0x53fba0 followed by fs-segment stack chaining); handler 0x53fba0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f9c0(void)

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
  puStack_68 = &LAB_0053fba0;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  FUN_0053aabc(&local_2c,0x24);
  GetSystemInfo(&local_2c);
  _DAT_00685a14 = local_2c.dwNumberOfProcessors;
  _DAT_00685a18 = local_2c.dwAllocationGranularity;
  _DAT_00685a1c = local_2c.dwPageSize;
  PTR_FUN_006852f8._0_1_ = *(int *)PTR_DAT_0068966c == 2;
  pHVar3 = GetModuleHandleW(L"kernel32.dll");
  FUN_00538a38(pHVar3,&local_8);
  local_30 = 0;
  if (((char)PTR_FUN_006852f8 == '\0') && (cVar2 = FUN_00538ca8(local_8,local_60), cVar2 != '\0')) {
    DAT_00690414 = local_50;
  }
  else {
    DAT_00690414 = 0;
  }
  uVar4 = FUN_0053f6cc();
  puVar1 = puStack_64;
  switch(uVar4 & 0x7f) {
  case 1:
    PTR_FUN_006852e4._0_1_ = 1;
    break;
  case 2:
    PTR_FUN_006852e8._0_1_ = 1;
    break;
  case 3:
    PTR_FUN_006852ec._0_1_ = 1;
    break;
  case 4:
    PTR_FUN_006852f0._0_1_ = 1;
    break;
  case 5:
    PTR_FUN_006852f4._0_1_ = 1;
    break;
  case 6:
    PTR_FUN_006852fc._0_1_ = 1;
    PTR_FUN_00685300._0_1_ = 1;
    break;
  case 7:
    PTR_FUN_006852fc._0_1_ = 1;
    PTR_FUN_00685304._0_1_ = 1;
    break;
  case 8:
    PTR_FUN_006852fc._0_1_ = 1;
    PTR_FUN_00685304._0_1_ = 1;
    PTR_FUN_00685308._0_1_ = 1;
    break;
  case 9:
    PTR_FUN_0068530c._0_1_ = 1;
    break;
  case 10:
    PTR_FUN_00685310._0_1_ = 1;
    break;
  case 0xb:
    PTR_FUN_00685314._0_1_ = 1;
    break;
  case 0xc:
    PTR_FUN_00685318._0_1_ = 1;
    break;
  case 0xd:
    PTR_FUN_0068531c._0_1_ = 1;
    break;
  case 0xe:
    PTR_FUN_00685320._0_1_ = 1;
    break;
  case 0xf:
    PTR_FUN_00685324._0_1_ = 1;
    break;
  case 0x10:
    PTR_FUN_00685328._0_1_ = 1;
    break;
  case 0x11:
    PTR_FUN_0068532c._0_1_ = 1;
    break;
  case 0x12:
    PTR_FUN_00685330._0_1_ = 1;
  }
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_0053fba7;
  puStack_68 = (undefined1 *)0x53fb9f;
  thunk_FUN_004072d8(&local_8,uStack_6c,puVar1);
  return;
}
