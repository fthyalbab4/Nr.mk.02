// rea decompile_all
// name: FUN_00619d0c
// address: 0x619d0c
// body: available
// range: 0x619d0c-0x61a5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619d0c(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar9;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  iVar5 = *(int *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  local_58 = 0;
  piVar1 = &local_50;
  do {
    local_54 = piVar1;
    uVar2 = local_58 * 4;
    iVar9 = *(int *)(param_1 + 4);
    if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar2)) {
      uVar2 = thunk_FUN_00404478();
      iVar9 = extraout_EDX;
    }
    uVar3 = (uint)*(byte *)(iVar9 + uVar2);
    uVar2 = local_58 * 4 + 1;
    iVar9 = *(int *)(param_1 + 4);
    if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar2)) {
      uVar3 = thunk_FUN_00404478();
      iVar9 = extraout_ECX;
      uVar2 = extraout_EDX_00;
    }
    iVar4 = uVar3 + (uint)*(byte *)(iVar9 + uVar2) * 0x100;
    uVar2 = local_58 * 4 + 2;
    iVar9 = *(int *)(param_1 + 4);
    if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar2)) {
      iVar4 = thunk_FUN_00404478();
      iVar9 = extraout_ECX_00;
      uVar2 = extraout_EDX_01;
    }
    iVar4 = iVar4 + (uint)*(byte *)(iVar9 + uVar2) * 0x10000;
    uVar2 = local_58 * 4 + 3;
    iVar9 = *(int *)(param_1 + 4);
    if ((iVar9 == 0) || (*(uint *)(iVar9 + -4) <= uVar2)) {
      iVar4 = thunk_FUN_00404478();
      iVar9 = extraout_ECX_01;
      uVar2 = extraout_EDX_02;
    }
    *local_54 = iVar4 + (uint)*(byte *)(iVar9 + uVar2) * 0x1000000;
    local_58 = local_58 + 1;
    piVar1 = local_54 + 1;
  } while (local_58 != 0x10);
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar6) & uVar8 ^ uVar6) + iVar5 + local_50 + _DAT_0077ec84,
                       CONCAT31((int3)((uint)local_54 >> 8),7));
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar7) & uVar2 ^ uVar7) + uVar6 + local_4c + _DAT_0077ec88,0xc);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar8) & uVar6 ^ uVar8) + uVar7 + local_48 + _DAT_0077ec8c,0x11);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar2) & uVar7 ^ uVar2) + uVar8 + local_44 + _DAT_0077ec90,0x16);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar6) & uVar8 ^ uVar6) + uVar2 + local_40 + _DAT_0077ec94,7);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar7) & uVar2 ^ uVar7) + uVar6 + local_3c + _DAT_0077ec98,0xc);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar8) & uVar6 ^ uVar8) + uVar7 + local_38 + _DAT_0077ec9c,0x11);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar2) & uVar7 ^ uVar2) + uVar8 + local_34 + _DAT_0077eca0,0x16);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar6) & uVar8 ^ uVar6) + uVar2 + local_30 + _DAT_0077eca4,7);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar7) & uVar2 ^ uVar7) + uVar6 + local_2c + _DAT_0077eca8,0xc);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar8) & uVar6 ^ uVar8) + uVar7 + local_28 + _DAT_0077ecac,0x11);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar2) & uVar7 ^ uVar2) + uVar8 + local_24 + _DAT_0077ecb0,0x16);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar6) & uVar8 ^ uVar6) + uVar2 + local_20 + _DAT_0077ecb4,7);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar7) & uVar2 ^ uVar7) + uVar6 + local_1c + _DAT_0077ecb8,0xc);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar8) & uVar6 ^ uVar8) + uVar7 + local_18 + _DAT_0077ecbc,0x11);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar2) & uVar7 ^ uVar2) + uVar8 + local_14 + _DAT_0077ecc0,0x16);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar8) & uVar6 ^ uVar7) + uVar2 + local_4c + _DAT_0077ecc4,5);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar2) & uVar7 ^ uVar8) + uVar6 + local_38 + _DAT_0077ecc8,9);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar6) & uVar8 ^ uVar2) + uVar7 + local_24 + _DAT_0077eccc,0xe);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar7) & uVar2 ^ uVar6) + uVar8 + local_50 + _DAT_0077ecd0,0x14);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar8) & uVar6 ^ uVar7) + uVar2 + local_3c + _DAT_0077ecd4,5);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar2) & uVar7 ^ uVar8) + uVar6 + local_28 + _DAT_0077ecd8,9);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar6) & uVar8 ^ uVar2) + uVar7 + local_14 + _DAT_0077ecdc,0xe);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar7) & uVar2 ^ uVar6) + uVar8 + local_40 + _DAT_0077ece0,0x14);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar8) & uVar6 ^ uVar7) + uVar2 + local_2c + _DAT_0077ece4,5);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar2) & uVar7 ^ uVar8) + uVar6 + local_18 + _DAT_0077ece8,9);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar6) & uVar8 ^ uVar2) + uVar7 + local_44 + _DAT_0077ecec,0xe);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar7) & uVar2 ^ uVar6) + uVar8 + local_30 + _DAT_0077ecf0,0x14);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((uVar7 ^ uVar8) & uVar6 ^ uVar7) + uVar2 + local_1c + _DAT_0077ecf4,5);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((uVar8 ^ uVar2) & uVar7 ^ uVar8) + uVar6 + local_48 + _DAT_0077ecf8,9);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((uVar2 ^ uVar6) & uVar8 ^ uVar2) + uVar7 + local_34 + _DAT_0077ecfc,0xe);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((uVar6 ^ uVar7) & uVar2 ^ uVar6) + uVar8 + local_20 + _DAT_0077ed00,0x14);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c((uVar7 ^ uVar8 ^ uVar6) + uVar2 + local_3c + _DAT_0077ed04,4);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c((uVar8 ^ uVar2 ^ uVar7) + uVar6 + local_30 + _DAT_0077ed08,0xb);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c((uVar2 ^ uVar6 ^ uVar8) + uVar7 + local_24 + _DAT_0077ed0c,0x10);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c((uVar6 ^ uVar7 ^ uVar2) + uVar8 + local_18 + _DAT_0077ed10,0x17);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c((uVar7 ^ uVar8 ^ uVar6) + uVar2 + local_4c + _DAT_0077ed14,4);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c((uVar8 ^ uVar2 ^ uVar7) + uVar6 + local_40 + _DAT_0077ed18,0xb);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c((uVar2 ^ uVar6 ^ uVar8) + uVar7 + local_34 + _DAT_0077ed1c,0x10);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c((uVar6 ^ uVar7 ^ uVar2) + uVar8 + local_28 + _DAT_0077ed20,0x17);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c((uVar7 ^ uVar8 ^ uVar6) + uVar2 + local_1c + _DAT_0077ed24,4);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c((uVar8 ^ uVar2 ^ uVar7) + uVar6 + local_50 + _DAT_0077ed28,0xb);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c((uVar2 ^ uVar6 ^ uVar8) + uVar7 + local_44 + _DAT_0077ed2c,0x10);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c((uVar6 ^ uVar7 ^ uVar2) + uVar8 + local_38 + _DAT_0077ed30,0x17);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c((uVar7 ^ uVar8 ^ uVar6) + uVar2 + local_2c + _DAT_0077ed34,4);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c((uVar8 ^ uVar2 ^ uVar7) + uVar6 + local_20 + _DAT_0077ed38,0xb);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c((uVar2 ^ uVar6 ^ uVar8) + uVar7 + local_14 + _DAT_0077ed3c,0x10);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c((uVar6 ^ uVar7 ^ uVar2) + uVar8 + local_48 + _DAT_0077ed40,0x17);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((~uVar6 | uVar8) ^ uVar7) + uVar2 + local_50 + _DAT_0077ed44,6);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((~uVar7 | uVar2) ^ uVar8) + uVar6 + local_34 + _DAT_0077ed48,10);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((~uVar8 | uVar6) ^ uVar2) + uVar7 + local_18 + _DAT_0077ed4c,0xf);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((~uVar2 | uVar7) ^ uVar6) + uVar8 + local_3c + _DAT_0077ed50,0x15);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((~uVar6 | uVar8) ^ uVar7) + uVar2 + local_20 + _DAT_0077ed54,6);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((~uVar7 | uVar2) ^ uVar8) + uVar6 + local_44 + _DAT_0077ed58,10);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((~uVar8 | uVar6) ^ uVar2) + uVar7 + local_28 + _DAT_0077ed5c,0xf);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((~uVar2 | uVar7) ^ uVar6) + uVar8 + local_4c + _DAT_0077ed60,0x15);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((~uVar6 | uVar8) ^ uVar7) + uVar2 + local_30 + _DAT_0077ed64,6);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((~uVar7 | uVar2) ^ uVar8) + uVar6 + local_14 + _DAT_0077ed68,10);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((~uVar8 | uVar6) ^ uVar2) + uVar7 + local_38 + _DAT_0077ed6c,0xf);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((~uVar2 | uVar7) ^ uVar6) + uVar8 + local_1c + _DAT_0077ed70,0x15);
  uVar8 = iVar5 + uVar7;
  iVar5 = FUN_00611c0c(((~uVar6 | uVar8) ^ uVar7) + uVar2 + local_40 + _DAT_0077ed74,6);
  uVar2 = iVar5 + uVar8;
  iVar5 = FUN_00611c0c(((~uVar7 | uVar2) ^ uVar8) + uVar6 + local_24 + _DAT_0077ed78,10);
  uVar6 = iVar5 + uVar2;
  iVar5 = FUN_00611c0c(((~uVar8 | uVar6) ^ uVar2) + uVar7 + local_48 + _DAT_0077ed7c,0xf);
  uVar7 = iVar5 + uVar6;
  iVar5 = FUN_00611c0c(((~uVar2 | uVar7) ^ uVar6) + uVar8 + local_2c + _DAT_0077ed80,0x15);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar5 + uVar7;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar6;
  return;
}
