// rea decompile_all
// name: FUN_00560994
// address: 0x560994
// body: available
// range: 0x560994-0x560b89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560994(int *param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int local_534 [257];
  char local_130 [260];
  char *local_2c;
  int *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
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
    local_10 = local_8[param_3 + 0x19];
  }
  else {
    local_10 = local_8[param_3 + 0x15];
  }
  if (local_10 == 0) {
    iVar2 = *local_8;
    *(undefined4 *)(iVar2 + 0x14) = 0x32;
    *(int *)(iVar2 + 0x18) = param_3;
    (**(code **)*local_8)();
  }
  if (*param_4 == 0) {
    iVar2 = (**(code **)local_8[1])(local_8,1,0x500);
    *param_4 = iVar2;
  }
  local_14 = *param_4;
  iVar2 = 0;
  iVar6 = 1;
  local_24 = (byte *)(local_10 + 1);
  do {
    bVar1 = *local_24;
    if (0x100 < (int)((uint)bVar1 + iVar2)) {
      *(undefined4 *)(*local_8 + 0x14) = 8;
      (**(code **)*local_8)();
    }
    pcVar3 = local_130 + iVar2;
    uVar5 = (uint)bVar1;
    while (uVar5 != 0) {
      iVar2 = iVar2 + 1;
      *pcVar3 = (char)iVar6;
      pcVar3 = pcVar3 + 1;
      uVar5 = uVar5 - 1;
    }
    iVar6 = iVar6 + 1;
    local_24 = local_24 + 1;
  } while (iVar6 < 0x11);
  local_130[iVar2] = '\0';
  local_18 = iVar2;
  iVar2 = 0;
  local_1c = (int)local_130[0];
  iVar6 = 0;
  while (local_130[iVar6] != '\0') {
    piVar4 = local_534 + iVar6;
    for (pcVar3 = local_130 + iVar6; *pcVar3 == local_1c; pcVar3 = pcVar3 + 1) {
      *piVar4 = iVar2;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + 1;
    }
    if (1 << ((byte)local_1c & 0x1f) <= iVar2) {
      *(undefined4 *)(*local_8 + 0x14) = 8;
      (**(code **)*local_8)();
    }
    iVar2 = iVar2 * 2;
    local_1c = local_1c + 1;
  }
  FUN_0054e1d0();
  if (local_c == 0) {
    local_20 = 0xff;
  }
  else {
    local_20 = 0xf;
  }
  local_2c = local_130;
  local_28 = local_534;
  iVar2 = 0;
  pbVar7 = (byte *)(local_10 + 0x11);
  if (0 < local_18) {
    do {
      uVar5 = (uint)*pbVar7;
      if ((local_20 < (int)uVar5) || (*(char *)(local_14 + 0x400 + uVar5) != '\0')) {
        *(undefined4 *)(*local_8 + 0x14) = 8;
        (**(code **)*local_8)();
      }
      iVar2 = iVar2 + 1;
      pbVar7 = pbVar7 + 1;
      *(int *)(local_14 + uVar5 * 4) = *local_28;
      *(char *)(local_14 + 0x400 + uVar5) = *local_2c;
      local_2c = local_2c + 1;
      local_28 = local_28 + 1;
    } while (iVar2 < local_18);
  }
  return;
}
