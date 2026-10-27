// rea decompile_all
// name: FUN_005981a4
// address: 0x5981a4
// body: available
// range: 0x5981a4-0x59821c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005981a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;

  FUN_004c074c(param_1,param_2);
  if (*(char *)(param_1 + 0x319) != '\0') {
    puVar5 = &LAB_0059800c;
    pcVar4 = FUN_00598094;
    iVar3 = param_1;
    iVar6 = param_1;
    uVar1 = FUN_0059811c();
    (**(code **)(*param_2 + 4))(param_2,L"ColWidths",uVar1,pcVar4,iVar3,puVar5,iVar6);
    pcVar2 = FUN_00598050;
    pcVar4 = FUN_005980d8;
    iVar3 = param_1;
    uVar1 = FUN_00598160();
    (**(code **)(*param_2 + 4))(param_2,L"RowHeights",uVar1,pcVar4,param_1,pcVar2,iVar3);
  }
  return;
}
