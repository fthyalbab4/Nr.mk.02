// rea decompile_all
// name: FUN_005293d8
// address: 0x5293d8
// body: available
// range: 0x5293d8-0x52954c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005293d8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint local_28;
  uint local_24;
  uint local_20;
  char local_10;
  char local_f;

  local_24 = *(uint *)(param_1 + 0x74);
  uVar2 = *(uint *)(param_1 + 0x70);
  pcVar3 = (char *)(*(int *)(param_1 + 0x30) + *(uint *)(param_1 + 100));
  if (*(int *)(param_1 + 0x24) - 0x106U < *(uint *)(param_1 + 100)) {
    uVar6 = *(int *)(param_1 + 100) - (*(int *)(param_1 + 0x24) + -0x106);
  }
  else {
    uVar6 = 0;
  }
  local_10 = pcVar3[uVar2 - 1];
  pcVar5 = (char *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 100));
  local_f = pcVar3[uVar2];
  if (*(uint *)(param_1 + 0x84) <= *(uint *)(param_1 + 0x70)) {
    local_24 = local_24 >> 2;
  }
  local_28 = param_2;
  local_20 = *(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x6c) < *(uint *)(param_1 + 0x88)) {
    local_20 = *(uint *)(param_1 + 0x6c);
  }
  do {
    pcVar8 = (char *)(*(int *)(param_1 + 0x30) + local_28);
    if ((((pcVar8[uVar2] == local_f) && (pcVar8[uVar2 - 1] == local_10)) && (*pcVar8 == *pcVar3)) &&
       (pcVar8[1] == pcVar3[1])) {
      pcVar8 = pcVar8 + 2;
      pcVar3 = pcVar3 + 2;
      while (((((pcVar4 = pcVar3 + 1, *pcVar4 == pcVar8[1] &&
                (pcVar4 = pcVar3 + 2, *pcVar4 == pcVar8[2])) &&
               ((pcVar4 = pcVar3 + 3, *pcVar4 == pcVar8[3] &&
                ((pcVar4 = pcVar3 + 4, *pcVar4 == pcVar8[4] &&
                 (pcVar4 = pcVar3 + 5, *pcVar4 == pcVar8[5])))))) &&
              (pcVar4 = pcVar3 + 6, *pcVar4 == pcVar8[6])) &&
             (pcVar4 = pcVar3 + 7, *pcVar4 == pcVar8[7]))) {
        pcVar4 = pcVar3 + 8;
        pcVar8 = pcVar8 + 8;
        if ((*pcVar4 != *pcVar8) || (pcVar3 = pcVar4, pcVar5 + 0x102 <= pcVar4)) break;
      }
      iVar1 = -((int)(pcVar5 + 0x102) - (int)pcVar4);
      uVar7 = iVar1 + 0x102;
      pcVar3 = pcVar5;
      if ((int)uVar2 < (int)uVar7) {
        *(uint *)(param_1 + 0x68) = local_28;
        if ((int)local_20 <= (int)uVar7) {
LAB_00529537:
          uVar2 = *(uint *)(param_1 + 0x6c);
          if (uVar7 <= uVar2) {
            uVar2 = uVar7;
          }
          return uVar2;
        }
        local_10 = pcVar5[iVar1 + 0x101];
        local_f = pcVar5[uVar7];
        uVar2 = uVar7;
      }
    }
    uVar7 = uVar2;
    local_28 = (uint)*(ushort *)
                      (*(int *)(param_1 + 0x38) + (local_28 & *(uint *)(param_1 + 0x2c)) * 2);
    if ((local_28 <= uVar6) || (local_24 = local_24 - 1, uVar2 = uVar7, local_24 == 0))
    goto LAB_00529537;
  } while( true );
}
