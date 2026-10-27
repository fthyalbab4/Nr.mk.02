// rea decompile_all
// name: FUN_00464330
// address: 0x464330
// body: available
// range: 0x464330-0x4643ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464330(int *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_60 [4];
  ushort local_50;
  ushort local_4e;
  undefined4 local_48;
  ushort local_3c;
  ushort local_3a;

  bVar6 = 0;
  iVar1 = param_1[10];
  if ((*(short *)(iVar1 + 0x3c) == 1) && (*(short *)(iVar1 + 0x3e) == 1)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  if (param_2 != bVar2) {
    FUN_004635c0(param_1);
    puVar4 = (undefined4 *)(iVar1 + 0x18);
    puVar5 = local_60;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    local_48 = 0;
    local_50 = (ushort)param_2;
    local_4e = local_50;
    local_3c = local_50;
    local_3a = local_50;
    FUN_004629c8(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}
