// rea decompile_all
// name: FUN_0052cd68
// address: 0x52cd68
// body: available
// range: 0x52cd68-0x52cf76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052cd68(int param_1,undefined4 *param_2)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;

  iVar5 = 0;
  psVar1 = (short *)*param_2;
  iVar6 = *(int *)param_2[2];
  puVar4 = (undefined1 *)(param_1 + 0x1450);
  iVar7 = ((int *)param_2[2])[3];
  local_14 = -1;
  *(undefined4 *)(param_1 + 0x1448) = 0;
  *(undefined4 *)(param_1 + 0x144c) = 0x23d;
  psVar2 = psVar1;
  if (0 < iVar7) {
    do {
      if (*psVar2 == 0) {
        psVar2[1] = 0;
      }
      else {
        *(int *)(param_1 + 0x1448) = *(int *)(param_1 + 0x1448) + 1;
        *(int *)(param_1 + 0xb54 + *(int *)(param_1 + 0x1448) * 4) = iVar5;
        *puVar4 = 0;
        local_14 = iVar5;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      psVar2 = psVar2 + 2;
    } while (iVar5 < iVar7);
  }
  while (*(int *)(param_1 + 0x1448) < 2) {
    if (local_14 < 2) {
      iVar5 = local_14 + 1;
      local_14 = iVar5;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0x1448) = *(int *)(param_1 + 0x1448) + 1;
    *(int *)(param_1 + 0xb54 + *(int *)(param_1 + 0x1448) * 4) = iVar5;
    psVar1[iVar5 * 2] = 1;
    *(undefined1 *)(param_1 + 0x1450 + iVar5) = 0;
    *(int *)(param_1 + 0x16a0) = *(int *)(param_1 + 0x16a0) + -1;
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x16a4) =
           *(int *)(param_1 + 0x16a4) - (uint)*(ushort *)(iVar6 + 2 + iVar5 * 4);
    }
  }
  param_2[1] = local_14;
  iVar6 = (int)*(uint *)(param_1 + 0x1448) >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((*(uint *)(param_1 + 0x1448) & 1) != 0);
  }
  for (; 0 < iVar6; iVar6 = iVar6 + -1) {
    FUN_0052ca04(param_1,psVar1,iVar6);
  }
  do {
    iVar6 = *(int *)(param_1 + 0x1448);
    iVar5 = *(int *)(param_1 + 0xb58);
    *(int *)(param_1 + 0x1448) = *(int *)(param_1 + 0x1448) + -1;
    *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_1 + 0xb54 + iVar6 * 4);
    FUN_0052ca04(param_1,psVar1,1);
    iVar6 = *(int *)(param_1 + 0xb58);
    *(int *)(param_1 + 0x144c) = *(int *)(param_1 + 0x144c) + -1;
    *(int *)(param_1 + 0xb54 + *(int *)(param_1 + 0x144c) * 4) = iVar5;
    *(int *)(param_1 + 0x144c) = *(int *)(param_1 + 0x144c) + -1;
    *(int *)(param_1 + 0xb54 + *(int *)(param_1 + 0x144c) * 4) = iVar6;
    psVar1[iVar7 * 2] = psVar1[iVar6 * 2] + psVar1[iVar5 * 2];
    if (*(byte *)(param_1 + 0x1450 + iVar5) < *(byte *)(param_1 + 0x1450 + iVar6)) {
      cVar3 = *(char *)(param_1 + 0x1450 + iVar6);
    }
    else {
      cVar3 = *(char *)(param_1 + 0x1450 + iVar5);
    }
    *(char *)(param_1 + 0x1450 + iVar7) = cVar3 + '\x01';
    psVar1[iVar6 * 2 + 1] = (short)iVar7;
    psVar1[iVar5 * 2 + 1] = (short)iVar7;
    *(int *)(param_1 + 0xb58) = iVar7;
    iVar7 = iVar7 + 1;
    FUN_0052ca04(param_1,psVar1,1);
  } while (1 < *(int *)(param_1 + 0x1448));
  *(int *)(param_1 + 0x144c) = *(int *)(param_1 + 0x144c) + -1;
  *(undefined4 *)(param_1 + 0xb54 + *(int *)(param_1 + 0x144c) * 4) =
       *(undefined4 *)(param_1 + 0xb58);
  FUN_0052caf8(param_1,param_2);
  FUN_0052ccf8(psVar1,local_14,param_1 + 0xb34);
  return;
}
