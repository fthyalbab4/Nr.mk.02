// rea decompile_all
// name: FUN_0068b7d4
// address: 0x68b7d4
// body: available
// range: 0x68b7d4-0x68b8ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b7d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;

  if (*(int *)(param_1 + 0x670) == 0) {
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x454),0);
  }
  else {
    uVar2 = FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x454) + 0x1b0));
    uVar7 = *(undefined4 *)(param_1 + 0x670);
    piVar3 = (int *)FUN_00462a64(uVar2);
    (**(code **)(*piVar3 + 0x3c))(piVar3,0,0,uVar7);
    iVar4 = FUN_00462a64(uVar2);
    FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),0xffffff);
    iVar4 = FUN_00462a64(uVar2);
    FUN_0045b954(*(undefined4 *)(iVar4 + 0x44),0xe);
    iVar4 = FUN_00462a64(uVar2);
    FUN_0045b9a4(*(undefined4 *)(iVar4 + 0x44),3);
    iVar4 = FUN_00462a64(uVar2);
    FUN_0045bda4(*(undefined4 *)(iVar4 + 0x48),1);
    iVar4 = *(int *)(param_1 + 0x660);
    iVar5 = iVar4 + *(int *)(param_1 + 0x668) + 1;
    iVar1 = *(int *)(param_1 + 0x664);
    iVar6 = iVar1 + *(int *)(param_1 + 0x66c) + 1;
    piVar3 = (int *)FUN_00462a64(uVar2);
    (**(code **)(*piVar3 + 0x74))(piVar3,iVar4 + -1,iVar1 + -1,iVar6,iVar5);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x454),1);
  }
  return;
}
