// rea decompile_all
// name: FUN_00523b20
// address: 0x523b20
// body: available
// range: 0x523b20-0x523be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x523bb1 (push 0x523be2 followed by fs-segment stack chaining); handler 0x523be2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  HPALETTE hpal;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_814 [1024];
  undefined2 local_414;
  undefined2 local_412;
  tagPALETTEENTRY local_410 [245];
  tagPALETTEENTRY local_3c [11];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar2 = &stack0xfffffffc;
  local_414 = 0x300;
  local_8._0_2_ = (undefined2)param_2;
  local_412 = (undefined2)local_8;
  local_8 = param_2;
  if (param_4 == '\0') {
    local_10 = 0;
  }
  else {
    hpal = GetStockObject(0xf);
    GetPaletteEntries(hpal,0,10,local_410);
    GetPaletteEntries(hpal,10,10,local_3c);
    local_8 = 0xec;
    local_10 = 10;
    local_412 = 0x100;
  }
  local_c = FUN_005237b8(&DAT_00523514,1,local_8);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffff7d4;
  FUN_00523844(local_c,param_1);
  FUN_00523830(local_c,local_814);
  *in_FS_OFFSET = uVar1;
  FUN_00405fdc(local_c,uVar1,puVar2);
  return;
}
