// rea decompile_all
// name: FUN_004922d8
// address: 0x4922d8
// body: available
// range: 0x4922d8-0x492338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004922d8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *local_10;

  if (param_2 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),param_2 < *(int *)(iVar1 + 8));
  }
  if ((char)uVar2 != '\0') {
    local_10 = param_3;
    uVar3 = FUN_00491a08(*(undefined4 *)(param_1 + 0xd0),param_2);
    (**(code **)(*local_10 + 8))(local_10,uVar3);
    if (*(short *)(param_1 + 0xda) != 0) {
      (**(code **)(param_1 + 0xd8))(*(undefined4 *)(param_1 + 0xdc),param_1,param_2,&local_10);
    }
  }
  return uVar2;
}
