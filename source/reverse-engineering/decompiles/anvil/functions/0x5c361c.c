// rea decompile_all
// name: FUN_005c361c
// address: 0x5c361c
// body: available
// range: 0x5c361c-0x5c3758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c361c(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  uint local_1c;
  int local_c;

  iVar3 = *(int *)(param_1 + 0x1ba);
  uVar4 = *(uint *)(param_1 + 0x6c);
  iVar5 = *(int *)(param_1 + 0x136);
  iVar6 = *(int *)(iVar3 + 8);
  iVar7 = *(int *)(iVar3 + 0xc);
  iVar8 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  local_c = param_3;
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    local_34 = *(byte **)(*param_2 + local_c * 4);
    local_38 = *(byte **)(param_2[1] + local_c * 4);
    local_3c = *(byte **)(param_2[2] + local_c * 4);
    local_40 = *(undefined1 **)(param_2[3] + local_c * 4);
    local_c = local_c + 1;
    puVar9 = (undefined1 *)*param_5;
    param_5 = param_5 + 1;
    local_1c = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = (uint)*local_34;
        bVar1 = *local_38;
        bVar2 = *local_3c;
        *puVar9 = *(undefined1 *)(iVar5 + (0xff - (*(int *)(iVar6 + (uint)bVar2 * 4) + uVar10)));
        puVar9[1] = *(undefined1 *)
                     (iVar5 + (0xff - ((*(int *)(iVar3 + (uint)bVar1 * 4) +
                                        *(int *)(iVar8 + (uint)bVar2 * 4) >> 0x10) + uVar10)));
        puVar9[2] = *(undefined1 *)(iVar5 + (0xff - (uVar10 + *(int *)(iVar7 + (uint)bVar1 * 4))));
        puVar9[3] = *local_40;
        puVar9 = puVar9 + 4;
        local_1c = local_1c + 1;
        local_40 = local_40 + 1;
        local_3c = local_3c + 1;
        local_38 = local_38 + 1;
        local_34 = local_34 + 1;
      } while (local_1c < uVar4);
    }
  }
  return;
}
