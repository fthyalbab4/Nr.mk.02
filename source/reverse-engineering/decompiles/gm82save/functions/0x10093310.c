// rea decompile_all
// name: FUN_10093310
// address: 0x10093310
// body: available
// range: 0x10093310-0x10093393 inclusive
// range: 0x100933a0-0x10093452 inclusive
// range: 0x10093460-0x1009347d inclusive
// range: 0x10093480-0x100934c3 inclusive
// range: 0x100934d0-0x100934f6 inclusive
// range: 0x10093500-0x10093599 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1009354d) */

void __fastcall FUN_10093310(undefined8 *param_1,ushort *param_2,SIZE_T param_3)

{
  ushort uVar1;
  code *pcVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint _Size;
  LPVOID pvVar9;
  ushort *puVar10;
  uint local_30;
  SIZE_T local_2c;
  LPVOID pvStack_28;
  uint local_24;
  uint uStack_20;
  ushort *local_1c;
  ushort local_16;
  undefined8 *local_14;

  local_14 = param_1;
  if (param_3 == 0) {
    pvStack_28 = (LPVOID)0x1;
  }
  else {
    pvStack_28 = FUN_10107380(0,param_3);
    if (pvStack_28 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  local_2c = param_3;
  local_1c = param_2 + param_3;
  local_24 = 0;
  uStack_20 = CONCAT31(uStack_20._1_3_,1);
  pvVar9 = pvStack_28;
  do {
    if (param_2 == local_1c) {
      local_14[1] = CONCAT44(uStack_20,local_24);
      *local_14 = CONCAT44(pvStack_28,local_2c);
      return;
    }
    puVar10 = param_2 + 1;
    uVar3 = *param_2;
    do {
      uVar4 = (uint)uVar3;
      param_2 = puVar10;
      if ((uVar4 & 0xf800) != 0xd800) {
        if (uVar4 < 0x80) {
          local_30 = uVar4 & 0xff;
          _Size = 1;
        }
        else {
LAB_1009349f:
          uVar6 = (undefined1)uVar4;
          uVar7 = (undefined1)(uVar4 >> 6);
          param_2 = puVar10;
          if (uVar4 < 0x800) {
            _Size = 2;
            local_30 = (ushort)(CONCAT11(uVar6,uVar7) | 0xc0) & 0xffff3fff | 0x8000;
          }
          else {
            uVar8 = (undefined1)(uVar4 >> 0xc);
            if (uVar4 < 0x10000) {
              local_30 = (CONCAT12(uVar6,CONCAT11(uVar7,uVar8)) & 0xff3fff | 0x80e0) & 0xff3fffff |
                         0x800000;
              _Size = 3;
            }
            else {
              _Size = 4;
              local_30 = CONCAT13(uVar6,CONCAT12(uVar7,CONCAT11(uVar8,(char)(uVar4 >> 0x12)))) &
                         0x3f3f3fff | 0x808080f0;
            }
          }
        }
        if (local_2c - local_24 < _Size) {
          FUN_101366d0(&local_2c,local_24,_Size);
          pvVar9 = pvStack_28;
        }
        uVar4 = local_24;
        memcpy((void *)((int)pvVar9 + local_24),&local_30,_Size);
        local_24 = uVar4 + _Size;
        break;
      }
      if ((uVar4 < 0xdc00) && (param_2 = local_1c, puVar10 != local_1c)) {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        if (0xfbff < (ushort)(uVar1 + 0x2000)) {
          uVar4 = (uVar4 & 0x3ff) * 0x400 + 0x10000 + (uVar1 & 0x3ff);
          goto LAB_1009349f;
        }
        bVar5 = true;
        param_2 = puVar10;
        local_16 = uVar1;
      }
      else {
        bVar5 = false;
      }
      uStack_20 = uStack_20 & 0xffffff00;
      if (local_2c - local_24 < 3) {
        FUN_101366d0(&local_2c,local_24,3);
      }
      *(undefined1 *)((int)pvStack_28 + local_24) = 0xed;
      *(byte *)((int)pvStack_28 + local_24 + 1) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      *(byte *)((int)pvStack_28 + local_24 + 2) = (byte)uVar3 & 0x3f | 0x80;
      local_24 = local_24 + 3;
      pvVar9 = pvStack_28;
      puVar10 = param_2;
      uVar3 = local_16;
    } while (bVar5);
  } while( true );
}
