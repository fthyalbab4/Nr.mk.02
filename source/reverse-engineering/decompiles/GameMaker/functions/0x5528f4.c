// rea decompile_all
// name: FUN_005528f4
// address: 0x5528f4
// body: available
// range: 0x5528f4-0x552bec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005528f4(int *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int aiStack_53c [257];
  char local_138 [260];
  byte *local_34;
  byte *local_30;
  int *local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int *local_8;

  local_c = param_2;
  local_8 = param_1;
  if ((param_3 < 0) || (3 < param_3)) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x32;
    *(int *)(iVar2 + 0x18) = param_3;
    (**(code **)*param_1)();
  }
  if (local_c == 0) {
    local_10 = (byte *)local_8[param_3 + 0x31];
  }
  else {
    local_10 = (byte *)local_8[param_3 + 0x2d];
  }
  if (local_10 == (byte *)0x0) {
    iVar2 = *local_8;
    *(undefined4 *)(iVar2 + 0x14) = 0x32;
    *(int *)(iVar2 + 0x18) = param_3;
    (**(code **)*local_8)();
  }
  if (*param_4 == 0) {
    iVar2 = (**(code **)local_8[1])(local_8,1,0x590);
    *param_4 = iVar2;
  }
  iVar2 = 1;
  local_14 = *param_4;
  *(byte **)(*param_4 + 0x8c) = local_10;
  local_18 = 0;
  pbVar6 = local_10;
  do {
    pbVar6 = pbVar6 + 1;
    local_1c = (uint)*pbVar6;
    if (0x100 < (int)(local_18 + local_1c)) {
      *(undefined4 *)(*local_8 + 0x14) = 8;
      (**(code **)*local_8)();
    }
    pcVar3 = local_138 + local_18;
    while (uVar1 = local_1c, local_1c = local_1c - 1, uVar1 != 0) {
      *pcVar3 = (char)iVar2;
      local_18 = local_18 + 1;
      pcVar3 = pcVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  iVar2 = 0;
  local_138[local_18] = '\0';
  local_20 = local_18;
  iVar7 = (int)local_138[0];
  local_18 = 0;
  while (local_138[local_18] != '\0') {
    piVar5 = aiStack_53c + local_18;
    for (pcVar3 = local_138 + local_18; iVar7 == *pcVar3; pcVar3 = pcVar3 + 1) {
      *piVar5 = iVar2;
      piVar5 = piVar5 + 1;
      local_18 = local_18 + 1;
      iVar2 = iVar2 + 1;
    }
    if (1 << ((byte)iVar7 & 0x1f) <= iVar2) {
      *(undefined4 *)(*local_8 + 0x14) = 8;
      (**(code **)*local_8)();
    }
    iVar2 = iVar2 * 2;
    iVar7 = iVar7 + 1;
  }
  local_18 = 0;
  iVar2 = 1;
  local_24 = (byte *)(local_14 + 0x4c);
  pbVar6 = local_10;
  do {
    pbVar6 = pbVar6 + 1;
    if (*pbVar6 == 0) {
      *(int *)((int)local_24 + -0x48) = -1;
    }
    else {
      *(int *)local_24 = local_18 - aiStack_53c[local_18];
      local_18 = local_18 + (uint)*pbVar6;
      *(int *)((int)local_24 + -0x48) = aiStack_53c[local_18 + -1];
    }
    local_24 = (byte *)((int)local_24 + 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  *(undefined4 *)(local_14 + 0x44) = 0xfffff;
  FUN_0054e1d0();
  local_18 = 0;
  iVar2 = 1;
  local_24 = local_10;
  do {
    local_24 = local_24 + 1;
    local_34 = local_10 + local_18 + 0x11;
    local_2c = aiStack_53c + local_18;
    local_28 = local_24;
    for (local_1c = 1; (int)local_1c <= (int)(uint)*local_24; local_1c = local_1c + 1) {
      bVar4 = 8 - (char)iVar2;
      iVar7 = *local_2c << (bVar4 & 0x1f);
      local_30 = local_34;
      pbVar6 = (byte *)(local_14 + 0x490 + iVar7);
      piVar5 = (int *)(local_14 + 0x90 + iVar7 * 4);
      for (iVar7 = 1 << (bVar4 & 0x1f); 0 < iVar7; iVar7 = iVar7 + -1) {
        *piVar5 = iVar2;
        piVar5 = piVar5 + 1;
        *pbVar6 = *local_34;
        pbVar6 = pbVar6 + 1;
      }
      local_2c = local_2c + 1;
      local_34 = local_34 + 1;
      local_18 = local_18 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  if (local_c != 0) {
    local_1c = 0;
    local_24 = local_10 + 0x11;
    if (0 < local_20) {
      do {
        if (0xf < *local_24) {
          *(undefined4 *)(*local_8 + 0x14) = 8;
          (**(code **)*local_8)();
        }
        local_1c = local_1c + 1;
        local_24 = local_24 + 1;
      } while ((int)local_1c < local_20);
    }
  }
  return;
}
