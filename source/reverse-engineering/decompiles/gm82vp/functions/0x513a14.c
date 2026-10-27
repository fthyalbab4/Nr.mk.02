// rea decompile_all
// name: FUN_00513a14
// address: 0x513a14
// body: available
// range: 0x513a14-0x513ac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x513a3a (push 0x513ac7 followed by fs-segment stack chaining); handler 0x513ac7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513a14(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  puStack_20 = (undefined1 *)0x513a2f;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_24 = &LAB_00513ac7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_005138d4(param_1);
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 != '\0') {
    FUN_0041733c(local_8,&local_c);
    FUN_00408194(param_1 + 8,local_c);
    FUN_004172fc(local_8,&local_10);
    FUN_00408194(param_1 + 0xc,local_10);
    uVar3 = FUN_00405fac(&LAB_004319cc,1);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    FUN_0043d544(uVar3,local_8);
    *(undefined4 *)(param_1 + 4) = param_3;
    *(undefined1 *)(param_1 + 0x14) = param_4;
    FUN_00513adc(param_1);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00513ace;
  puStack_24 = (undefined1 *)0x513ac6;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
