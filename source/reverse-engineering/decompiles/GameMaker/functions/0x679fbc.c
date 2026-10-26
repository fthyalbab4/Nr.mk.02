// rea decompile_all
// name: FUN_00679fbc
// address: 0x679fbc
// body: available
// range: 0x679fbc-0x67a0c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00679fbc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_14;
  int iStack_10;

  if (param_1[0x6d] != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,&iStack_14);
    (**(code **)(**(int **)(param_1[0x6a] + 0x40) + 8))
              (*(int **)(param_1[0x6a] + 0x40),param_1[0x19]);
    FUN_00679ec8(param_1);
    iVar2 = param_1[0x12];
    iVar5 = param_1[0x13];
    bVar1 = *(byte *)((int)param_1 + 0x1b9);
    if (bVar1 < 2) {
      iVar5 = FUN_006781b8(param_1,&iStack_14);
      iVar2 = param_1[0x71];
      iVar3 = FUN_00678128(param_1);
      iVar2 = iVar5 + iVar2 + iStack_14 + iVar3 + param_1[0x73];
      iVar5 = FUN_00678170(param_1);
      if (iVar5 < iStack_10) {
        iVar5 = iStack_10;
      }
      iVar5 = iVar5 + param_1[0x72] + param_1[0x74];
    }
    else if ((byte)(bVar1 - 2) < 2) {
      iVar2 = FUN_00678128(param_1,bVar1 - 4);
      iVar2 = iVar2 + param_1[0x71] + iStack_14 + param_1[0x73];
      iVar3 = FUN_006781b8(param_1,&iStack_14);
      iVar5 = param_1[0x72];
      iVar4 = FUN_00678170(param_1);
      iVar5 = iVar3 + iVar5 + iStack_10 + iVar4 + param_1[0x74];
    }
    if ((iVar2 != param_1[0x12]) || (iVar5 != param_1[0x13])) {
      (**(code **)(*param_1 + 0x98))(param_1,param_1[0x10],param_1[0x11],iVar5,iVar2);
      (**(code **)(*param_1 + 0xa4))();
      (**(code **)(*param_1 + 0x68))();
    }
  }
  return;
}
