// rea decompile_all
// name: FUN_0046566c
// address: 0x46566c
// body: available
// range: 0x46566c-0x465690 inclusive
// range: 0x4656a9-0x46570f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046566c(int param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;

  if (param_2 != *(byte *)(param_1 + 0x3c)) {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x3c) = param_2;
    puVar7 = PTR_DAT_007826a8;
    puVar6 = PTR_DAT_0078264c;
    puVar5 = PTR_DAT_007822fc;
    puVar4 = PTR_DAT_007821e8;
    puVar3 = PTR_DAT_0078191c;
    puVar2 = PTR_DAT_007817b0;
    switch(param_2 & 0x7f) {
    case 0:
      puVar1 = (undefined4 *)(PTR_DAT_0078191c + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_0078191c;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar3 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar3 + 0xc);
      break;
    case 1:
      puVar1 = (undefined4 *)(PTR_DAT_007817b0 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_007817b0;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar2 + 0xc);
      break;
    case 2:
      puVar1 = (undefined4 *)(PTR_DAT_007821e8 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_007821e8;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar4 + 0xc);
      break;
    case 3:
      puVar1 = (undefined4 *)(PTR_DAT_007822fc + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_007822fc;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar5 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar5 + 0xc);
      break;
    case 4:
      puVar1 = (undefined4 *)(PTR_DAT_0078264c + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_0078264c;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar6 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar6 + 0xc);
      break;
    case 5:
      puVar1 = (undefined4 *)(PTR_DAT_007826a8 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_007826a8;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar7 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar7 + 0xc);
    }
  }
  return;
}
