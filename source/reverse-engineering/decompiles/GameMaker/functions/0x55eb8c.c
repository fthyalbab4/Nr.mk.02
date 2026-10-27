// rea decompile_all
// name: FUN_0055eb8c
// address: 0x55eb8c
// body: available
// range: 0x55eb8c-0x55ec1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055eb8c(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *local_18;
  int *local_14;
  int local_c;

  uVar4 = *(int *)(param_2 + 0x1c) * 8;
  FUN_0055e95c(param_3,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_2 + 0x1c) << 4);
  local_14 = param_4;
  local_18 = param_3;
  for (local_c = 0; local_c < *(int *)(param_2 + 0xc); local_c = local_c + 1) {
    uVar8 = 0;
    puVar6 = (undefined1 *)*local_14;
    pbVar3 = (byte *)*local_18;
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        pbVar1 = pbVar3 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar3 + 2;
        iVar7 = (uint)bVar2 + (uint)*pbVar1 + uVar5;
        uVar5 = uVar5 ^ 1;
        *puVar6 = (char)(iVar7 >> 1);
        puVar6 = puVar6 + 1;
      } while (uVar8 < uVar4);
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
  }
  return;
}
