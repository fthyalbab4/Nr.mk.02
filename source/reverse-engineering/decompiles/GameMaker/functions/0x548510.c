// rea decompile_all
// name: FUN_00548510
// address: 0x548510
// body: available
// range: 0x548510-0x54855c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00548510(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = *(undefined2 *)(param_2 + 2);
  uVar1 = *(undefined1 *)((int)param_2 + 10);
  puVar5 = (undefined4 *)FUN_0040431c(0x10);
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  *(undefined2 *)(puVar5 + 3) = uVar2;
  *(undefined1 *)((int)puVar5 + 0xe) = uVar1;
  *puVar5 = param_3;
  FUN_0043ae88(param_1,puVar5);
  return;
}
