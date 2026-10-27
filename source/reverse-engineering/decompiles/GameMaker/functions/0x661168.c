// rea decompile_all
// name: FUN_00661168
// address: 0x661168
// body: available
// range: 0x661168-0x66121e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00661168(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  cVar1 = FUN_00405c98(param_2,&PTR_FUN_0065fae8);
  if (cVar1 == '\0') {
    param_1[0xc4] = 0;
  }
  else {
    *(undefined4 *)(param_1[0xcf] + 0x310) = param_2;
  }
  FUN_0048e1e4(*(undefined4 *)(param_1[0xcf] + 0x388),1);
  iVar2 = FUN_00660100(*(undefined4 *)(param_1[0xcf] + 900));
  if (*(char *)(iVar2 + 0x318) != '\0') {
    FUN_0048e1e4(*(undefined4 *)(param_1[0xcf] + 0x378),0);
    iVar2 = FUN_006619bc(param_1);
    iVar3 = FUN_006762e4(param_1);
    if (iVar2 != iVar3) {
      *(undefined4 *)(*(int *)(param_1[0xcf] + 0x378) + 0xc) = 1;
    }
    uVar4 = (**(code **)(*param_1 + 0x120))();
    FUN_0048e1e4(*(undefined4 *)(param_1[0xcf] + 0x378),uVar4 ^ 1);
  }
  return;
}
