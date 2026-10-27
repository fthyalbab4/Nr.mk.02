// rea decompile_all
// name: FUN_0046f530
// address: 0x46f530
// body: available
// range: 0x46f530-0x46f607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046f530(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_14;
  ushort local_12;
  ushort local_10 [2];

  iVar1 = FUN_0040bfac();
  if ((param_1 == *(int *)(iVar1 + 0x28)) &&
     (iVar1 = FUN_0040bfac(), param_2 == *(int *)(iVar1 + 0x24))) {
    iVar1 = FUN_0040bfac();
    return *(undefined4 *)(iVar1 + 0x2c);
  }
  if ((param_1 == -0xfffff1) && (param_2 == 0x13)) {
    uVar2 = 0xff000014;
  }
  else {
    uVar2 = FUN_0045b0f4(param_1);
    FUN_0046ee20(uVar2,&local_14,&local_12,local_10);
    if ((local_10[0] < 0xdd) ||
       (((int)((uint)local_12 - param_2) < 0 || (0xffff < (int)((uint)local_12 - param_2))))) {
      uVar2 = FUN_0046f4a4(uVar2,param_2,0);
    }
    else {
      uVar2 = FUN_0046f280(local_14,local_12 - (short)param_2,local_10[0]);
    }
    iVar1 = FUN_0040bfac();
    *(int *)(iVar1 + 0x24) = param_2;
    iVar1 = FUN_0040bfac();
    *(int *)(iVar1 + 0x28) = param_1;
    iVar1 = FUN_0040bfac();
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  }
  return uVar2;
}
