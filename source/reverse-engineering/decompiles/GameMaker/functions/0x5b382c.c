// rea decompile_all
// name: FUN_005b382c
// address: 0x5b382c
// body: available
// range: 0x5b382c-0x5b391b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b382c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_005b32a4(param_1);
  iVar2 = FUN_0052f024(param_2);
  if ((iVar2 == 800) || (iVar2 == 0x32a)) {
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_00409be0(param_1 + 0x30,&DAT_005b2754,1,uVar3);
    iVar2 = *(int *)(param_1 + 4);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        uVar3 = FUN_00701bf8(&DAT_00700d94,1);
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4) = uVar3;
        FUN_00702510(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4),param_2);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar1 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_005b35e4(param_1,param_2,iVar2);
  }
  return uVar3;
}
