// rea decompile_all
// name: FUN_0068f3cc
// address: 0x68f3cc
// body: available
// range: 0x68f3cc-0x68f6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068f3cc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char local_168 [4];
  int local_164;
  undefined1 local_130 [12];
  int local_124;
  int local_f8;
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_bc [16];
  int local_ac;
  int local_84;
  undefined1 local_80 [56];
  undefined1 local_48 [56];

  if (*(char *)(*(int *)(param_1 + 0x61c) + 0x128) != '\0') {
    iVar2 = FUN_00462a64(param_2,param_2,param_3,*param_3,param_3[1],param_3[2],param_3[3]);
    FUN_0045b850(*(undefined4 *)(iVar2 + 0x44),0);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045b954(*(undefined4 *)(iVar2 + 0x44),4);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045b9a4(*(undefined4 *)(iVar2 + 0x44),3);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045bda4(*(undefined4 *)(iVar2 + 0x48),1);
    iVar2 = 0;
    do {
      FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_168);
      if (local_168[0] != '\0') {
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_168);
        iVar1 = local_164;
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_130);
        local_f8 = iVar1 + local_124;
        uVar3 = FUN_00404878();
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_f4,uVar3);
        iVar1 = local_ec;
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_bc);
        local_84 = iVar1 + local_ac;
        uVar3 = FUN_00404878();
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_80,uVar3);
        uVar3 = FUN_00404878();
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_48);
        uVar4 = FUN_00404878();
        piVar5 = (int *)FUN_00462a64(param_2);
        (**(code **)(*piVar5 + 0x74))(piVar5,uVar4,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045b850(*(undefined4 *)(iVar2 + 0x44),0xffffff);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045b954(*(undefined4 *)(iVar2 + 0x44),4);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045b9a4(*(undefined4 *)(iVar2 + 0x44),1);
    iVar2 = FUN_00462a64(param_2);
    FUN_0045bda4(*(undefined4 *)(iVar2 + 0x48),1);
    iVar2 = 0;
    do {
      FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_168);
      if (local_168[0] != '\0') {
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_168);
        iVar1 = local_164;
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_130);
        local_f8 = iVar1 + local_124;
        uVar3 = FUN_00404878();
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_f4,uVar3);
        iVar1 = local_ec;
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_bc);
        local_84 = iVar1 + local_ac;
        uVar3 = FUN_00404878();
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_80,uVar3);
        uVar3 = FUN_00404878();
        FUN_00657574(*(undefined4 *)(param_1 + 0x61c),iVar2,local_48);
        uVar4 = FUN_00404878();
        piVar5 = (int *)FUN_00462a64(param_2);
        (**(code **)(*piVar5 + 0x74))(piVar5,uVar4,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
  }
  return;
}
