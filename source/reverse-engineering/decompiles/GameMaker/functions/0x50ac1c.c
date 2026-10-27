// rea decompile_all
// name: FUN_0050ac1c
// address: 0x50ac1c
// body: available
// range: 0x50ac1c-0x50ad25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ac1c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = FUN_00405c98(param_2,&PTR_FUN_00509914);
  if (cVar1 == '\0') {
    FUN_0043c620(param_1,param_2);
  }
  else {
    FUN_0050ad28(param_2,*(undefined1 *)(param_1 + 0x95));
    FUN_0050ad88(param_2,*(undefined4 *)(param_1 + 100));
    FUN_0050ade8(param_2,*(undefined1 *)(param_1 + 0x69));
    FUN_0050aef0(param_2,*(undefined1 *)(param_1 + 0x6a));
    FUN_0050af6c(param_2,*(undefined4 *)(param_1 + 0x6c));
    (**(code **)(*param_2 + 0x4c))(param_2,*(undefined4 *)(param_1 + 0x74));
    (**(code **)(*param_2 + 0x50))(param_2,*(undefined4 *)(param_1 + 0x78));
    FUN_0050afc4(param_2,*(undefined1 *)(param_1 + 0x70));
    FUN_0050b0dc(param_2,*(undefined4 *)(param_1 + 0x7c));
    FUN_0050b13c(param_2,*(undefined4 *)(param_1 + 0x80));
    uVar2 = FUN_0050b334(param_1);
    FUN_0050b35c(param_2,uVar2);
    FUN_0050b198(param_2,*(undefined2 *)(param_1 + 0x84));
    FUN_0050b1fc(param_2,*(undefined1 *)(param_1 + 0x86));
    param_2[3] = *(int *)(param_1 + 0xc);
    (**(code **)(*param_2 + 0x38))();
    param_2[0x22] = *(int *)(param_1 + 0x88);
    param_2[0x23] = *(int *)(param_1 + 0x8c);
    param_2[0x12] = *(int *)(param_1 + 0x48);
    param_2[0x13] = *(int *)(param_1 + 0x4c);
    param_2[0xe] = *(int *)(param_1 + 0x38);
    param_2[0xf] = *(int *)(param_1 + 0x3c);
  }
  return;
}
