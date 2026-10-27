// rea decompile_all
// name: FUN_0046f4a4
// address: 0x46f4a4
// body: available
// range: 0x46f4a4-0x46f52e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046f4a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 local_14;
  short local_12;
  undefined2 local_10 [2];

  iVar1 = FUN_0040bfac();
  if ((param_1 == *(int *)(iVar1 + 0x3c)) &&
     (iVar1 = FUN_0040bfac(), param_2 == *(int *)(iVar1 + 0x40))) {
    iVar1 = FUN_0040bfac();
    return *(undefined4 *)(iVar1 + 0x44);
  }
  puVar3 = local_10;
  uVar2 = FUN_0045b0f4(param_1);
  FUN_0046ee20(uVar2,&local_14,&local_12,puVar3);
  uVar2 = FUN_0046f280(local_14,local_12 + (short)param_2,local_10[0]);
  iVar1 = FUN_0040bfac();
  *(int *)(iVar1 + 0x3c) = param_1;
  iVar1 = FUN_0040bfac();
  *(int *)(iVar1 + 0x40) = param_2;
  iVar1 = FUN_0040bfac();
  *(undefined4 *)(iVar1 + 0x44) = uVar2;
  return uVar2;
}
