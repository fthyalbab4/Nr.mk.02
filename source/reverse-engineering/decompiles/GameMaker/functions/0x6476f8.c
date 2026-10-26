// rea decompile_all
// name: FUN_006476f8
// address: 0x6476f8
// body: available
// range: 0x6476f8-0x64778c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006476f8(int param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  puVar1 = PTR_DAT_007824bc;
  FUN_00643eac(param_1);
  FUN_00639838(*(undefined4 *)puVar1,0);
  FUN_00639820(*(undefined4 *)puVar1,1);
  FUN_0063986c(*(undefined4 *)puVar1,0);
  FUN_004ee6d8(*(undefined4 *)puVar1,L"Resize");
  FUN_006397bc(*(undefined4 *)puVar1,*(undefined4 *)(*(int *)(param_1 + 0x704) + 4));
  FUN_006397dc(*(undefined4 *)puVar1,*(undefined4 *)(*(int *)(param_1 + 0x704) + 8));
  cVar2 = FUN_00639878(*(undefined4 *)puVar1);
  if (cVar2 != '\0') {
    uVar3 = FUN_006397f4(*(undefined4 *)puVar1);
    uVar4 = FUN_006397b4(*(undefined4 *)puVar1);
    uVar7 = 0;
    uVar6 = *(undefined4 *)PTR_DAT_00781744;
    uVar5 = FUN_006397d4(*(undefined4 *)puVar1);
    FUN_00644130(param_1,5,uVar5,uVar6,uVar7,uVar4,uVar3);
  }
  return;
}
