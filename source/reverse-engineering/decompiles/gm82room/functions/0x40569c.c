// rea decompile_all
// name: FUN_0040569c
// address: 0x40569c
// body: available
// range: 0x40569c-0x40579d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040569c(ushort *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;

  puVar7 = (ushort *)0x0;
  if (param_1 == (ushort *)0x0) {
LAB_0040572d:
    uVar2 = 0;
    puVar7 = puVar7 + 1;
  }
  else {
    uVar2 = 0;
    puVar7 = param_1;
    do {
      puVar6 = puVar7;
      uVar4 = *puVar6;
      puVar7 = puVar6 + 1;
    } while (uVar4 == 0x20);
    bVar1 = false;
    if (uVar4 == 0x2d) {
      bVar1 = true;
LAB_0040573f:
      uVar4 = *puVar7;
      puVar7 = puVar6 + 2;
    }
    else if (uVar4 == 0x2b) goto LAB_0040573f;
    if (((uVar4 == 0x24) || (uVar4 == 0x78)) || (uVar4 == 0x58)) {
LAB_00405747:
      uVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar3 = uVar2;
      if (uVar4 != 0) {
        do {
          if (0x60 < uVar4) {
            uVar4 = uVar4 - 0x20;
          }
          uVar5 = uVar4 - 0x30;
          uVar2 = uVar3;
          if (9 < uVar5) {
            if (5 < (ushort)(uVar4 - 0x41)) goto LAB_00405738;
            uVar5 = uVar4 - 0x37;
          }
          if (0xfffffff < uVar3) goto LAB_00405738;
          uVar3 = uVar3 * 0x10 + (uint)uVar5;
          uVar4 = *puVar7;
          puVar7 = puVar7 + 1;
        } while (uVar4 != 0);
        if (bVar1) {
          uVar3 = -uVar3;
        }
LAB_00405793:
        uVar8 = 0;
        goto LAB_00405796;
      }
      goto LAB_0040572d;
    }
    if (uVar4 != 0x30) {
      if (uVar4 != 0) goto LAB_00405703;
      goto LAB_00405738;
    }
    uVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    if ((uVar4 == 0x78) || (uVar4 == 0x58)) goto LAB_00405747;
    while (uVar4 != 0) {
LAB_00405703:
      if ((9 < (ushort)(uVar4 - 0x30)) || (0xccccccc < uVar2)) goto LAB_00405738;
      uVar2 = uVar2 * 10 + (uint)(ushort)(uVar4 - 0x30);
      uVar4 = *puVar7;
      puVar7 = puVar7 + 1;
    }
    if (bVar1) {
      uVar3 = -uVar2;
      if ((uVar3 == 0 || 0 < (int)uVar2) || (uVar2 = uVar3, (int)uVar3 < 0)) goto LAB_00405793;
    }
    else {
      uVar3 = uVar2;
      if (-1 < (int)uVar2) goto LAB_00405793;
    }
  }
LAB_00405738:
  uVar8 = (int)puVar7 - (int)param_1;
  uVar3 = uVar2;
LAB_00405796:
  *param_2 = uVar8 >> 1;
  return uVar3;
}
