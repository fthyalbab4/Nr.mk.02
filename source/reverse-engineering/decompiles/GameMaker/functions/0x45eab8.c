// rea decompile_all
// name: FUN_0045eab8
// address: 0x45eab8
// body: available
// range: 0x45eab8-0x45ebde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45eae0 (push 0x45ebdf followed by fs-segment stack chaining); handler 0x45ebdf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045eab8(undefined4 param_1,char param_2)

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
    puStack_38 = (undefined1 *)0x45ead1;
    param_1 = FUN_00405fb0();
  }
  puStack_3c = &LAB_0045ebdf;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_00405a4c(param_1,0);
  uVar3 = 0;
  ppuVar2 = &PTR_FUN_00457f98;
  FUN_0040b75c(PTR_PTR_00782048,&local_8);
  FUN_0045eccc(param_1,&DAT_0045ec10,local_8,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_FUN_00457f98;
  FUN_0040b75c(PTR_PTR_00781854,&local_c);
  FUN_0045eccc(param_1,&DAT_0045ec24,local_c,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_LAB_00459100;
  FUN_0040b75c(PTR_PTR_00781850,&local_10);
  FUN_0045eccc(param_1,&DAT_0045ec38,local_10,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_LAB_00459674;
  FUN_0040b75c(PTR_PTR_007825f8,&local_14);
  FUN_0045eccc(param_1,L"tiff",local_14,ppuVar2,uVar3);
  uVar3 = 0;
  ppuVar1 = &PTR_LAB_00459674;
  FUN_0040b75c(PTR_PTR_007825f8,&local_18);
  FUN_0045eccc(param_1,&DAT_0045ec64,local_18,ppuVar1,uVar3);
  uVar3 = 0;
  ppuVar2 = &PTR_FUN_004587d4;
  FUN_0040b75c(PTR_PTR_0078183c,&local_1c);
  FUN_0045eccc(param_1,&LAB_0045ec78,local_1c,ppuVar2,uVar3);
  *in_FS_OFFSET = ppuVar2;
  thunk_FUN_00406e80(&local_1c,6,ppuVar1,&LAB_0045ebe6);
  return;
}
