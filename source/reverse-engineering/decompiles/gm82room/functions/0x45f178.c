// rea decompile_all
// name: FUN_0045f178
// address: 0x45f178
// body: available
// range: 0x45f178-0x45f29e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45f1a0 (push 0x45f29f followed by fs-segment stack chaining); handler 0x45f29f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f178(undefined4 param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x45f191;
    param_1 = FUN_00406510();
  }
  puStack_3c = &LAB_0045f29f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_00405fac(param_1,0);
  uVar3 = 0;
  ppuVar2 = &PTR_FUN_00458658;
  FUN_0040b9d0(PTR_LAB_00688fe4,&local_8);
  FUN_0045f38c(param_1,&PTR_DAT_0045f2d0,local_8,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_FUN_00458658;
  FUN_0040b9d0(PTR_LAB_00688a68,&local_c);
  FUN_0045f38c(param_1,&PTR_DAT_0045f2e4,local_c,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_LAB_004597c0;
  FUN_0040b9d0(PTR_LAB_00688a64,&local_10);
  FUN_0045f38c(param_1,&PTR_DAT_0045f2f8,local_10,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_LAB_00459d34;
  FUN_0040b9d0(PTR_LAB_006893e4,&local_14);
  FUN_0045f38c(param_1,L"tiff",local_14,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar1 = &PTR_LAB_00459d34;
  FUN_0040b9d0(PTR_LAB_006893e4,&local_18);
  FUN_0045f38c(param_1,&PTR_DAT_0045f324,local_18,ppuVar1,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_FUN_00458e94;
  FUN_0040b9d0(PTR_LAB_00688a54,&local_1c);
  FUN_0045f38c(param_1,&LAB_0045f338,local_1c,ppuVar2,uVar3);
  *in_FS_OFFSET = ppuVar2;
  thunk_FUN_004072fc(&local_1c,6,ppuVar1,&LAB_0045f2a6);
  return;
}
