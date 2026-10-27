// rea decompile_all
// name: FUN_004b1abc
// address: 0x4b1abc
// body: available
// range: 0x4b1abc-0x4b1b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1abc(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 auStack_34 [2];
  undefined2 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [16];

  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    (**(code **)(*param_1 + 0xe8))();
  }
  cVar1 = FUN_00438c9c(*(undefined4 *)(param_2 + 8));
  if (cVar1 != '\0') {
    iVar2 = FUN_004b053c(param_1);
    if (iVar2 != 0) {
      uVar3 = FUN_004b053c(param_1);
      FUN_004ad8ec(uVar3,1,auStack_18);
      FUN_0040c29c(auStack_18,auStack_20);
      FUN_004ee09c(param_1,auStack_20,auStack_34);
      uStack_2c = CONCAT22(uStack_30,auStack_34[0]);
      *(undefined4 *)(param_2 + 8) = uStack_2c;
    }
  }
  FUN_004f8a48(param_1,param_2);
  if ((*(byte *)(param_1 + 7) & 8) == 0) {
    iStack_28 = (int)*(short *)(param_2 + 8);
    iStack_24 = (int)*(short *)(param_2 + 10);
    FUN_004ee1d0(param_1,&iStack_28,&uStack_3c);
    uVar3 = FUN_005136ac();
    FUN_00405d08(param_1,1,uVar3,uStack_38,uStack_3c);
  }
  return;
}
