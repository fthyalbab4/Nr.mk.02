// rea decompile_all
// name: FUN_00405a6c
// address: 0x405a6c
// body: available
// range: 0x405a6c-0x405ba2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00405a6c(short *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint local_18;

  iVar2 = 0;
  local_18 = 0;
  psVar6 = param_1;
  if (param_1 == (short *)0x0) {
    psVar6 = (short *)0x2;
  }
  else {
    do {
      psVar5 = psVar6;
      sVar3 = *psVar5;
      psVar6 = psVar5 + 1;
    } while (sVar3 == 0x20);
    if ((sVar3 == 0x2d) || (sVar3 == 0x2b)) {
      sVar3 = *psVar6;
      psVar6 = psVar5 + 2;
    }
    if (sVar3 != 0) {
      do {
        uVar4 = sVar3 - 0x30;
        if (9 < uVar4) {
          if (uVar4 != 0xfffe) goto LAB_00405b11;
          sVar3 = *psVar6;
          goto joined_r0x00405ae9;
        }
        sVar3 = *psVar6;
        psVar6 = psVar6 + 1;
        local_18 = (uint)uVar4;
      } while (sVar3 != 0);
LAB_00405b0d:
      uVar7 = 0;
      goto LAB_00405b77;
    }
  }
  goto LAB_00405b9a;
joined_r0x00405ae9:
  if (sVar3 == 0) goto LAB_00405b0d;
  psVar6 = psVar6 + 1;
  uVar4 = sVar3 - 0x30;
  if (9 < uVar4) goto LAB_00405b11;
  iVar2 = iVar2 + -1;
  sVar3 = *psVar6;
  local_18 = (uint)uVar4;
  goto joined_r0x00405ae9;
LAB_00405b11:
  if ((uVar4 != 0x15) && (uVar4 != 0x35)) goto LAB_00405b9a;
  sVar3 = *psVar6;
  bVar1 = false;
  if (sVar3 == 0x2d) {
    bVar1 = true;
LAB_00405b35:
    sVar3 = psVar6[1];
    psVar5 = psVar6 + 2;
  }
  else {
    psVar5 = psVar6 + 1;
    if (sVar3 == 0x2b) goto LAB_00405b35;
  }
  psVar6 = psVar5;
  uVar7 = (uint)(ushort)(sVar3 - 0x30U);
  if ((ushort)(sVar3 - 0x30U) < 10) {
    sVar3 = *psVar6;
    while (sVar3 != 0) {
      psVar6 = psVar6 + 1;
      if (9 < (ushort)(sVar3 - 0x30U)) goto LAB_00405b9a;
      uVar7 = uVar7 * 10 + (uint)(ushort)(sVar3 - 0x30U);
      sVar3 = *psVar6;
    }
    if (bVar1) {
      uVar7 = -uVar7;
    }
    iVar2 = (int)(char)iVar2;
LAB_00405b77:
    local_18 = FUN_00405bac(iVar2 + uVar7);
    uVar7 = 0;
    goto LAB_00405b8b;
  }
LAB_00405b9a:
  uVar7 = (int)psVar6 - (int)param_1;
LAB_00405b8b:
  *param_2 = uVar7 >> 1;
  return local_18;
}
