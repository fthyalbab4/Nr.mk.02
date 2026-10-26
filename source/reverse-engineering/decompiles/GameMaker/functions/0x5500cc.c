// rea decompile_all
// name: FUN_005500cc
// address: 0x5500cc
// body: available
// range: 0x5500cc-0x550133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005500cc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  iVar1 = param_1[1];
  if (param_2 != 1) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0xe;
    *(int *)(iVar2 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  puVar3 = (undefined4 *)FUN_0054fcdc(param_1,param_2,0x80);
  *puVar3 = 0;
  puVar3[1] = param_5;
  puVar3[2] = param_6;
  puVar3[3] = param_4;
  puVar3[8] = param_3;
  puVar3[10] = 0;
  puVar3[0xb] = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 **)(iVar1 + 0x48) = puVar3;
  return;
}
