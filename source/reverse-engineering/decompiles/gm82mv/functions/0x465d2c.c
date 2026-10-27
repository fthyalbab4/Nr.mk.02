// rea decompile_all
// name: FUN_00465d2c
// address: 0x465d2c
// body: available
// range: 0x465d2c-0x465d50 inclusive
// range: 0x465d69-0x465dcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465d2c(int param_1,byte param_2)

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
    puVar7 = PTR_DAT_00689460;
    puVar6 = PTR_DAT_0068941c;
    puVar5 = PTR_DAT_006891c0;
    puVar4 = PTR_DAT_00689114;
    puVar3 = PTR_DAT_00688ae0;
    puVar2 = PTR_DAT_006889ec;
    switch(param_2 & 0x7f) {
    case 0:
      puVar1 = (undefined4 *)(PTR_DAT_00688ae0 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_00688ae0;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar3 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar3 + 0xc);
      break;
    case 1:
      puVar1 = (undefined4 *)(PTR_DAT_006889ec + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_006889ec;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar2 + 0xc);
      break;
    case 2:
      puVar1 = (undefined4 *)(PTR_DAT_00689114 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_00689114;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar4 + 0xc);
      break;
    case 3:
      puVar1 = (undefined4 *)(PTR_DAT_006891c0 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_006891c0;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar5 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar5 + 0xc);
      break;
    case 4:
      puVar1 = (undefined4 *)(PTR_DAT_0068941c + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_0068941c;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar6 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar6 + 0xc);
      break;
    case 5:
      puVar1 = (undefined4 *)(PTR_DAT_00689460 + 4);
      *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)PTR_DAT_00689460;
      *(undefined4 *)(param_1 + 0x41) = *puVar1;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(puVar7 + 8);
      *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(puVar7 + 0xc);
    }
  }
  return;
}
