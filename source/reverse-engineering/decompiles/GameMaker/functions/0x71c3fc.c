// rea decompile_all
// name: FUN_0071c3fc
// address: 0x71c3fc
// body: available
// range: 0x71c3fc-0x71c51a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071c3fc(undefined4 param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;

  iVar1 = FUN_004d89cc(&PTR_FUN_004d5e80,1,param_1);
  FUN_004dbc6c(iVar1,*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_0071ccc0(param_2);
  FUN_004dbe60(iVar1,uVar2);
  if (*(int *)(iVar1 + 0x40) == 2) {
    FUN_004dbe60(iVar1,1);
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0xc) + 4) != 2) {
    *(undefined4 *)(iVar1 + 0x8c) = DAT_0079a9f4;
    *(undefined1 **)(iVar1 + 0x88) = &LAB_0071c3f0;
  }
  if (param_3 != '\0') {
    if (*(int *)(*(int *)(param_2 + 0xc) + 4) != 2) {
      *(undefined4 *)(iVar1 + 0x88) = param_8;
      *(undefined4 *)(iVar1 + 0x8c) = param_9;
    }
    *(undefined4 *)(iVar1 + 0x90) = param_6;
    *(undefined4 *)(iVar1 + 0x94) = param_7;
    *(undefined4 *)(iVar1 + 0xa0) = param_4;
    *(undefined4 *)(iVar1 + 0xa4) = param_5;
  }
  FUN_004dc190(param_1,iVar1);
  if (*(int *)(*(int *)(param_2 + 0xc) + 4) == 2) {
    *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
    iVar3 = FUN_004ad490(param_2);
    if (-1 < iVar3 + -1) {
      local_c = 0;
      do {
        uVar2 = param_4;
        uVar5 = param_5;
        uVar6 = param_6;
        uVar7 = param_7;
        uVar8 = param_8;
        uVar9 = param_9;
        uVar4 = FUN_004ad3b4(param_2,local_c);
        FUN_0071c3fc(iVar1,uVar4,param_3,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9);
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
