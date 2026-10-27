// rea decompile_all
// name: FUN_10113a10
// address: 0x10113a10
// body: available
// range: 0x10113a10-0x10113bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10113a10(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  ushort uVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint local_1c;
  ushort *puStack_18;
  undefined4 local_14;

  uVar7 = *(ushort *)(param_2 + 2);
  if (uVar7 == 0) {
    pbVar3 = (byte *)*param_2;
    pbVar6 = (byte *)param_2[1];
    if (pbVar3 == pbVar6) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    pbVar9 = pbVar3 + 1;
    *param_2 = (int)pbVar9;
    bVar1 = *pbVar3;
    if ((char)bVar1 < '\0') {
      pbVar9 = pbVar3 + 2;
      *param_2 = (int)pbVar9;
      bVar2 = pbVar3[1];
      uVar8 = bVar1 & 0x1f;
      if (bVar1 < 0xe0) {
        iVar11 = 0;
        uVar7 = (ushort)(uVar8 << 6) | (ushort)(bVar2 & 0x3f);
      }
      else {
        pbVar9 = pbVar3 + 3;
        *param_2 = (int)pbVar9;
        uVar10 = (pbVar3[2] & 0x3f) + (bVar2 & 0x3f) * 0x40;
        if (bVar1 < 0xf0) {
          uVar10 = uVar10 | uVar8 << 0xc;
        }
        else {
          pbVar9 = pbVar3 + 4;
          *param_2 = (int)pbVar9;
          uVar10 = pbVar3[3] & 0x3f | uVar10 * 0x40 | (bVar1 & 7) << 0x12;
        }
        uVar7 = (ushort)uVar10;
        if (uVar10 < 0x10000) {
          iVar11 = 0;
        }
        else {
          uVar5 = uVar7 & 0x3ff;
          uVar7 = (ushort)(uVar10 + 0xff0000 >> 10) | 0xd800;
          *(ushort *)(param_2 + 2) = uVar5 | 0xdc00;
          iVar11 = 1;
        }
      }
    }
    else {
      uVar7 = (ushort)bVar1;
      iVar11 = 0;
    }
  }
  else {
    *(undefined2 *)(param_2 + 2) = 0;
    iVar11 = 0;
    pbVar9 = (byte *)*param_2;
    pbVar6 = (byte *)param_2[1];
  }
  uVar8 = 0xffffffff;
  if ((uint)((int)pbVar6 - (int)pbVar9) < 0xfffffffd) {
    uVar8 = ((int)pbVar6 - (int)pbVar9) + 3;
  }
  uVar10 = (uVar8 >> 2) + iVar11;
  uVar8 = 3;
  if (3 < uVar10) {
    uVar8 = uVar10;
  }
  if (uVar10 < 0x3fffffff) {
    puStack_18 = FUN_10107380(0,(uVar8 + 1) * 2);
    if (puStack_18 != (ushort *)0x0) {
      *puStack_18 = uVar7;
      local_14 = 1;
      local_1c = uVar8 + 1;
      FUN_1010c780(&local_1c,param_2);
      *(undefined4 *)(param_1 + 1) = local_14;
      *param_1 = CONCAT44(puStack_18,local_1c);
      return;
    }
    FUN_101366bc(2);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  FUN_101367b0();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
