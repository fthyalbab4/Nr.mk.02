// rea decompile_all
// name: FUN_0042d0fc
// address: 0x42d0fc
// body: available
// range: 0x42d0fc-0x42d1ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d0fc(int param_1,undefined1 *param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  byte bVar8;
  undefined1 *puVar7;
  undefined2 uVar11;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar12;

  bVar3 = false;
  if (param_1 == 0) {
    return;
  }
  puVar7 = param_2;
  if (param_2 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(uint)CONCAT11(*param_2,param_2[-4]);
  }
  do {
    iVar1 = param_1 + 2 + (uint)*(byte *)(param_1 + 1);
    uVar10 = (uint)*(byte *)(iVar1 + 10);
    uVar12 = (uint)*(ushort *)(iVar1 + 0xb + uVar10);
    if (uVar12 != 0) {
      iVar5 = iVar1 + 0xd + uVar10;
      do {
        if (bVar3) {
LAB_0042d194:
          uVar10 = uVar10 & 0xffff0000;
          cVar4 = FUN_0042cf68(iVar5 + 0x1a);
          uVar6 = param_2[-4];
          if (cVar4 != '\0') {
            return;
          }
LAB_0042d165:
          puVar7 = (undefined1 *)(CONCAT11(*param_2,uVar6) & 0xffffdfff);
          puVar9 = (undefined1 *)CONCAT31((int3)(uVar10 >> 8),*(undefined1 *)(iVar5 + 0x1a));
        }
        else {
          uVar2 = *(ushort *)(iVar5 + 0x1a);
          uVar11 = (undefined2)(uVar10 >> 0x10);
          uVar10 = CONCAT22(uVar11,uVar2);
          if ((uVar2 & 0x8000) != 0) goto LAB_0042d194;
          if (((uint)puVar7 & 0x8000) != 0) {
LAB_0042d18d:
            bVar3 = true;
            goto LAB_0042d194;
          }
          puVar7 = (undefined1 *)((uint)puVar7 & 0xdfff);
          puVar9 = (undefined1 *)(CONCAT22(uVar11,uVar2) & 0xffffdfff);
          if (puVar9 == puVar7) {
            uVar10 = CONCAT22((short)((uint)puVar9 >> 0x10),(ushort)(byte)puVar9);
            while( true ) {
              uVar6 = SUB41(puVar7,0);
              if ((param_2[uVar10 - 1] & 0x80) != 0) break;
              bVar8 = param_2[uVar10 - 1] ^ *(byte *)(iVar5 + 0x1a + uVar10);
              puVar7 = (undefined1 *)(uint)CONCAT11(bVar8,uVar6);
              if ((bVar8 & 0x80) != 0) goto LAB_0042d194;
              if ((bVar8 & 0xdf) != 0) goto LAB_0042d165;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                return;
              }
            }
            goto LAB_0042d18d;
          }
        }
        uVar10 = CONCAT22((short)((uint)puVar9 >> 0x10),(ushort)(byte)puVar9);
        uVar12 = uVar12 - 1;
        iVar5 = iVar5 + 0x1b + uVar10;
      } while (uVar12 != 0);
    }
    if (*(int **)(iVar1 + 4) == (int *)0x0) {
      return;
    }
    param_1 = **(int **)(iVar1 + 4);
  } while( true );
}
