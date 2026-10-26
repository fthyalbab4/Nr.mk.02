// rea decompile_all
// name: FUN_00588488
// address: 0x588488
// body: available
// range: 0x588488-0x588581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5884b1 (push 0x588582 followed by fs-segment stack chaining); handler 0x588582 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00588488(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [56];

  puStack_60 = (undefined1 *)0x5884a6;
  local_40 = param_2;
  FUN_00408ff8(local_3c,&DAT_00615fdc);
  puStack_64 = &LAB_00588582;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  *PTR_PTR_00688e10 = 0;
  if (*(char *)(param_3 + 8) == '\0') {
    puStack_60 = &stack0xfffffffc;
    FUN_00610d7c(param_3,0,&PTR_DAT_005885a0);
  }
  else if (*(int *)(param_3 + 4) == 3) {
    puStack_60 = &stack0xfffffffc;
    FUN_00409360(param_4,param_3 + 0x48,&DAT_00615f70);
  }
  else if ((param_1 == 0) || (local_40 == 0)) {
    puStack_60 = &stack0xfffffffc;
    FUN_00610d7c(param_3,0,&PTR_DAT_00588608);
  }
  else {
    local_4c = local_40;
    local_48 = 0;
    puStack_60 = &stack0xfffffffc;
    local_50 = param_1;
    local_44 = param_3;
    FUN_00409360(local_3c,param_3 + 0x10,&DAT_00615fdc);
    if (*(int *)(param_3 + 4) == 2) {
      FUN_00586fa0(&local_50,local_3c,param_4);
    }
    else {
      FUN_00588418(&local_50,local_3c,param_4);
    }
    if (local_48 != 0) {
      FUN_00405fdc();
    }
  }
  puVar1 = puStack_60;
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_00588589;
  puStack_64 = (undefined1 *)0x588581;
  FUN_004090d0(local_3c,&DAT_00615fdc,puVar1);
  return;
}
