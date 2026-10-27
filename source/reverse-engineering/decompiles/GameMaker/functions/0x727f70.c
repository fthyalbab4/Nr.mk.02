// rea decompile_all
// name: FUN_00727f70
// address: 0x727f70
// body: available
// range: 0x727f70-0x727fd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00727f70(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;

  bVar7 = 0;
  if (*(char *)(param_1 + 0x460) == '\x02') {
    *(undefined1 *)(param_1 + 0x460) = 4;
  }
  FUN_00727334(param_1,0xd);
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar6 = puVar1 + (uint)bVar7 * -2 + 1;
  puVar4 = (undefined4 *)(param_1 + 0x45c + (uint)bVar7 * -8);
  *puVar1 = *(undefined4 *)(param_1 + 0x458);
  puVar5 = puVar4 + (uint)bVar7 * -2 + 1;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar7 * -2 + 1] = *puVar5;
  *(undefined1 *)(puVar6 + (uint)bVar7 * -2 + 1 + (uint)bVar7 * -2 + 1) =
       *(undefined1 *)(puVar5 + (uint)bVar7 * -2 + 1);
  uVar3 = FUN_00726894(*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = uVar3;
  uVar3 = FUN_00726894(puVar1[1]);
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = uVar3;
  *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x134);
  FUN_00727660(param_1,param_2);
  return;
}
