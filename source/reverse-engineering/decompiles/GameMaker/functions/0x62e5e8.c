// rea decompile_all
// name: FUN_0062e5e8
// address: 0x62e5e8
// body: available
// range: 0x62e5e8-0x62e739 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0062e5e8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uStack_28;
  undefined1 auStack_24 [16];
  int iStack_14;

  piVar1 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  FUN_00463dc0(piVar1,7);
  (**(code **)(*piVar1 + 0x44))(piVar1,0x10);
  (**(code **)(*piVar1 + 0x38))(piVar1,0x10);
  iVar2 = FUN_00462a64(piVar1);
  FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),0xffffff);
  piVar3 = (int *)FUN_00462a64(piVar1);
  (**(code **)(*piVar3 + 0x10))(piVar3,auStack_24);
  puVar7 = auStack_24;
  piVar3 = (int *)FUN_00462a64(piVar1);
  (**(code **)(*piVar3 + 0x4c))(piVar3,puVar7);
  iVar2 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 8) != 0)) {
    if (*(int *)(iVar2 + 8) < *(int *)(*(int *)(param_1 + 4) + 4)) {
      uVar5 = 0x10;
      iStack_14 = *(int *)(*(int *)(param_1 + 4) + 8) << 4;
      uStack_28 = FUN_00404878();
    }
    else {
      uStack_28 = 0x10;
      iStack_14 = *(int *)(*(int *)(param_1 + 4) + 4) << 4;
      uVar5 = FUN_00404878();
    }
    uVar4 = FUN_00701cf4(&DAT_00700d94,1,iVar2);
    FUN_0070205c(uVar4,uVar5,uStack_28,2);
    iVar2 = (int)uStack_28 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uStack_28 & 1) != 0);
    }
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    FUN_00703978(uVar4,piVar1,8 - iVar6,1,8 - iVar2);
    FUN_00405a7c(uVar4);
    uVar4 = 0xffffff;
    piVar3 = (int *)FUN_00462a64(piVar1);
    (**(code **)(*piVar3 + 0x20))(piVar3,0,0xf,uVar4);
  }
  return piVar1;
}
