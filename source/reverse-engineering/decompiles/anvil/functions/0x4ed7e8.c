// rea decompile_all
// name: FUN_004ed7e8
// address: 0x4ed7e8
// body: available
// range: 0x4ed7e8-0x4ed8ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004ed7e8(int param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int aiStackY_1818 [1521];
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [5];

  bVar3 = 0;
  cVar2 = '\0';
  if (*(char *)(param_1 + 8) != '\0') {
    puStack_48 = (undefined4 *)0x4ed803;
    cVar1 = FUN_00449fc8();
    if ((cVar1 != '\0') && (cVar2 = *(char *)(param_1 + 0x28), cVar2 == '\0')) {
      puStack_48 = (undefined4 *)0x4ed820;
      (**(code **)(*param_2 + 0x54))(param_2,&uStack_44);
      puStack_48 = &uStack_24;
      puStack_4c = (undefined4 *)0x4ed833;
      FUN_004be628(param_2,&uStack_44,*(undefined4 *)(param_1 + 4));
      puStack_48 = (undefined4 *)uStack_28;
      uStack_44 = uStack_24;
      puStack_4c = &uStack_28;
      FUN_004be628(param_2,&uStack_40,*(undefined4 *)(param_1 + 4));
      uStack_44 = aiStack_38[3];
      uStack_40 = uStack_28;
      (**(code **)(**(int **)(param_1 + 4) + 0x54))(*(int **)(param_1 + 4),&uStack_3c);
      FUN_0040c354(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                   aiStack_38[1] - *(int *)(param_1 + 0x14),&uStack_24,
                   aiStack_38[2] - *(int *)(param_1 + 0x18));
      uStack_3c = uStack_24;
      aiStack_38[(uint)bVar3 * -2] = aiStack_20[(uint)bVar3 * -2];
      aiStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           aiStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      (aiStack_38 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (aiStack_20 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
      cVar2 = FUN_0040c39c(&uStack_3c,&puStack_4c);
      if ((cVar2 != '\0') && (cVar2 = FUN_0040c39c(&uStack_3c,&uStack_44), cVar2 != '\0')) {
        return '\0';
      }
      cVar2 = '\x01';
    }
  }
  return cVar2;
}
