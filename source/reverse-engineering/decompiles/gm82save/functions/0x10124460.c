// rea decompile_all
// name: FUN_10124460
// address: 0x10124460
// body: available
// range: 0x10124460-0x101244f9 inclusive
// range: 0x10124500-0x10124586 inclusive
// range: 0x10124590-0x10124a41 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char __cdecl FUN_10124460(int *param_1,byte param_2)

{
  uint uVar1;
  void *pvVar2;
  byte *_Dst;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint local_20;

  iVar15 = param_1[1];
  uVar12 = *(uint *)(param_1[7] + 0x20);
  uVar5 = *(int *)(param_1[7] + 0x5c) - 5;
  if (uVar12 < uVar5) {
    uVar5 = uVar12;
  }
  do {
    iVar7 = param_1[7];
    local_20 = param_1[1];
    uVar6 = (uint)((byte)(*(char *)(iVar7 + 0x70) + 0x2aU) >> 3);
    uVar12 = param_1[4] - uVar6;
    if ((uint)param_1[4] < uVar6) {
LAB_101246df:
      bVar11 = false;
      goto joined_r0x101246d9;
    }
    uVar10 = *(int *)(iVar7 + 0x10) - *(int *)(iVar7 + 0x3c);
    uVar6 = uVar10;
    if ((int)uVar10 < 1) {
      uVar6 = 0;
    }
    uVar14 = uVar6 + local_20;
    if (uVar14 < 0xffff) {
      if (uVar14 <= uVar12) {
        uVar12 = uVar14;
      }
LAB_10124508:
      if (uVar12 < uVar5) {
        if (uVar12 == 0) {
          uVar12 = 0;
          if (param_2 == 4) goto LAB_1012453a;
        }
        else {
LAB_1012452f:
          if (param_2 == 0) goto LAB_101246df;
LAB_1012453a:
          bVar11 = uVar12 == uVar14;
          uVar12 = uVar14;
          if (bVar11) goto LAB_10124544;
        }
        bVar11 = false;
        goto joined_r0x101246d9;
      }
    }
    else {
      if (uVar12 < 0xffff) goto LAB_10124508;
      uVar12 = 0xffff;
      if (0xffff < uVar5) goto LAB_1012452f;
    }
LAB_10124544:
    bVar11 = uVar12 == uVar14;
    FUN_1012a720(iVar7,0,0,bVar11 && param_2 == 4);
    uVar14 = *(uint *)(iVar7 + 100);
    if (uVar14 < 4) {
      FUN_101369c0("rewinding past then startC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\algorithm\\stored.rs"
                   ,0x33,&DAT_1015fb24);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iVar8 = uVar14 - 4;
    *(int *)(iVar7 + 100) = iVar8;
    if (iVar8 == 0) {
      iVar13 = 0;
      *(undefined4 *)(iVar7 + 0x60) = 0;
    }
    else {
      iVar13 = *(int *)(iVar7 + 0x60);
    }
    uVar1 = *(uint *)(iVar7 + 0x5c);
    uVar9 = iVar8 + iVar13;
    if (uVar1 - uVar9 < 2) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,&DAT_1015fb34);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar1 < uVar9) {
      FUN_10136a50(uVar9,uVar1,uVar1,&DAT_1015fb34);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(ushort *)(*(int *)(iVar7 + 0x58) + uVar9) = (ushort)uVar12;
    *(uint *)(iVar7 + 100) = uVar14 - 2;
    uVar1 = *(uint *)(iVar7 + 0x5c);
    uVar9 = (uVar14 - 2) + *(int *)(iVar7 + 0x60);
    if (uVar1 - uVar9 < 2) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,&DAT_1015fb44);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar1 < uVar9) {
      FUN_10136a50(uVar9,uVar1,uVar1,&DAT_1015fb44);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(ushort *)(*(int *)(iVar7 + 0x58) + uVar9) = ~(ushort)uVar12;
    *(uint *)(iVar7 + 100) = uVar14;
    FUN_1012b0b0((int)param_1);
    if (0 < (int)uVar10) {
      iVar7 = param_1[7];
      uVar10 = *(uint *)(iVar7 + 0x18);
      uVar14 = *(uint *)(iVar7 + 0x3c);
      if (uVar10 < uVar14) {
        FUN_10136a50(uVar14,uVar10,uVar10,&DAT_1015fb54);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar12 < uVar6) {
        uVar6 = uVar12;
      }
      pvVar2 = (void *)param_1[3];
      memcpy(pvVar2,(void *)(uVar14 + *(int *)(iVar7 + 0x14)),uVar6);
      uVar12 = uVar12 - uVar6;
      param_1[3] = (int)pvVar2 + uVar6;
      param_1[4] = param_1[4] - uVar6;
      param_1[5] = param_1[5] + uVar6;
      *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + uVar6;
    }
    if (uVar12 != 0) {
      uVar6 = param_1[1];
      if (uVar6 <= uVar12) {
        uVar12 = uVar6;
      }
      if (uVar6 != 0) {
        _Dst = (byte *)param_1[3];
        param_1[1] = uVar6 - uVar12;
        iVar7 = param_1[7];
        pvVar2 = (void *)*param_1;
        cVar4 = *(char *)(iVar7 + 2);
        memcpy(_Dst,pvVar2,uVar12);
        if (cVar4 == '\x01') {
          uVar6 = FUN_10122760(param_1[0xc],_Dst,uVar12);
          param_1[0xc] = uVar6;
        }
        else if (cVar4 == '\x02') {
          uVar6 = FUN_10122090(*(uint *)(iVar7 + 0xa0),_Dst,uVar12);
          *(uint *)(iVar7 + 0xa0) = uVar6;
        }
        *param_1 = (int)pvVar2 + uVar12;
        param_1[2] = param_1[2] + uVar12;
        param_1[3] = (int)(_Dst + uVar12);
        param_1[4] = param_1[4] - uVar12;
        param_1[5] = param_1[5] + uVar12;
      }
    }
  } while (!bVar11 || param_2 != 4);
  local_20 = param_1[1];
  bVar11 = true;
joined_r0x101246d9:
  uVar12 = iVar15 - local_20;
  if (uVar12 == 0) {
    if (bVar11) {
      return '\x03';
    }
  }
  else {
    iVar15 = param_1[7];
    uVar5 = *(uint *)(iVar15 + 0x20);
    if (uVar12 < uVar5) {
      uVar10 = *(uint *)(iVar15 + 0x10);
      if (*(int *)(iVar15 + 0x50) - uVar10 <= uVar12) {
        uVar10 = uVar10 - uVar5;
        *(uint *)(iVar15 + 0x10) = uVar10;
        uVar6 = *(uint *)(iVar15 + 0x18);
        uVar14 = uVar6 - uVar5;
        if (uVar10 <= uVar6 - uVar5) {
          uVar14 = uVar10;
        }
        uVar10 = uVar14 + uVar5;
        if (uVar6 < uVar10) {
          FUN_10136a50(0,uVar10,uVar6,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar10 < uVar5) {
          FUN_10136a50(uVar5,uVar10,uVar6,&PTR_s_C__Users_runneradmin__rustup_too_1015de74);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memmove(*(void **)(iVar15 + 0x14),(void *)(uVar5 + (int)*(void **)(iVar15 + 0x14)),uVar14);
        if (*(byte *)(iVar15 + 0x3a) < 2) {
          *(byte *)(iVar15 + 0x3a) = *(byte *)(iVar15 + 0x3a) + 1;
        }
        uVar10 = *(uint *)(iVar15 + 0x10);
        uVar5 = *(uint *)(iVar15 + 0x80);
        if (uVar10 < *(uint *)(iVar15 + 0x80)) {
          uVar5 = uVar10;
        }
        *(uint *)(iVar15 + 0x80) = uVar5;
      }
      uVar6 = *(uint *)(iVar15 + 0x18);
      uVar5 = uVar10 + uVar12;
      if ((uVar5 < uVar10) || (uVar6 < uVar5)) {
LAB_101249e8:
        FUN_10136a50(uVar10,uVar5,uVar6,&DAT_1015b800);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy((void *)(uVar10 + *(int *)(iVar15 + 0x14)),(void *)(*param_1 - uVar12),uVar12);
      iVar7 = *(int *)(iVar15 + 0x10) + uVar12;
      *(int *)(iVar15 + 0x10) = iVar7;
      uVar5 = *(int *)(iVar15 + 0x20) - *(int *)(iVar15 + 0x80);
      if (uVar12 <= uVar5) {
        uVar5 = uVar12;
      }
      *(uint *)(iVar15 + 0x80) = uVar5 + *(int *)(iVar15 + 0x80);
    }
    else {
      *(undefined1 *)(iVar15 + 0x3a) = 2;
      uVar6 = *(uint *)(iVar15 + 0x18);
      if (uVar6 < uVar5) {
        uVar10 = 0;
        goto LAB_101249e8;
      }
      memcpy(*(void **)(iVar15 + 0x14),(void *)(*param_1 - uVar5),uVar5);
      iVar7 = *(int *)(iVar15 + 0x20);
      *(int *)(iVar15 + 0x10) = iVar7;
      *(int *)(iVar15 + 0x80) = iVar7;
    }
    *(int *)(iVar15 + 0x3c) = iVar7;
    if (bVar11) {
      return '\x03';
    }
  }
  if ((((param_2 & 0xfb) == 0) || (local_20 != 0)) ||
     (cVar4 = '\x01', *(int *)(param_1[7] + 0x10) != *(int *)(param_1[7] + 0x3c))) {
    iVar15 = param_1[7];
    uVar12 = *(uint *)(iVar15 + 0x10);
    uVar5 = *(int *)(iVar15 + 0x50) - uVar12;
    if (uVar5 < local_20) {
      uVar6 = *(uint *)(iVar15 + 0x20);
      if ((int)uVar6 <= *(int *)(iVar15 + 0x3c)) {
        uVar12 = uVar12 - uVar6;
        *(uint *)(iVar15 + 0x3c) = *(int *)(iVar15 + 0x3c) - uVar6;
        *(uint *)(iVar15 + 0x10) = uVar12;
        uVar10 = *(uint *)(iVar15 + 0x18);
        uVar14 = uVar10 - uVar6;
        if (uVar12 <= uVar10 - uVar6) {
          uVar14 = uVar12;
        }
        uVar12 = uVar14 + uVar6;
        if (uVar10 < uVar12) {
          FUN_10136a50(0,uVar12,uVar10,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar12 < uVar6) {
          FUN_10136a50(uVar6,uVar12,uVar10,&PTR_s_C__Users_runneradmin__rustup_too_1015de74);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memmove(*(void **)(iVar15 + 0x14),(void *)(uVar6 + (int)*(void **)(iVar15 + 0x14)),uVar14);
        if (*(byte *)(iVar15 + 0x3a) < 2) {
          *(byte *)(iVar15 + 0x3a) = *(byte *)(iVar15 + 0x3a) + 1;
        }
        uVar12 = *(uint *)(iVar15 + 0x10);
        uVar5 = uVar5 + *(int *)(iVar15 + 0x20);
        uVar6 = *(uint *)(iVar15 + 0x80);
        if (uVar12 < *(uint *)(iVar15 + 0x80)) {
          uVar6 = uVar12;
        }
        *(uint *)(iVar15 + 0x80) = uVar6;
      }
    }
    if (local_20 < uVar5) {
      uVar5 = local_20;
    }
    if (uVar5 == 0) {
      uVar6 = *(uint *)(iVar15 + 0x20);
    }
    else {
      FUN_101240d0(param_1,uVar12,uVar5);
      iVar15 = param_1[7];
      uVar12 = *(int *)(iVar15 + 0x10) + uVar5;
      *(uint *)(iVar15 + 0x10) = uVar12;
      uVar6 = *(uint *)(iVar15 + 0x20);
      uVar10 = uVar6 - *(int *)(iVar15 + 0x80);
      if (uVar5 <= uVar10) {
        uVar10 = uVar5;
      }
      *(uint *)(iVar15 + 0x80) = uVar10 + *(int *)(iVar15 + 0x80);
      local_20 = param_1[1];
    }
    uVar5 = *(uint *)(iVar15 + 0x3c);
    uVar14 = *(int *)(iVar15 + 0x5c) - (uint)((byte)(*(char *)(iVar15 + 0x70) + 0x2aU) >> 3);
    uVar10 = 0xffff;
    if (uVar14 < 0xffff) {
      uVar10 = uVar14;
    }
    if (uVar10 <= uVar6) {
      uVar6 = uVar10;
    }
    uVar12 = uVar12 - uVar5;
    if ((int)uVar12 < (int)uVar6) {
      if (param_2 == 0) {
        return '\0';
      }
      if (param_2 != 4 && (int)uVar12 < 1) {
        return '\0';
      }
      if (local_20 != 0) {
        return '\0';
      }
    }
    uVar6 = uVar12;
    if (uVar10 < uVar12) {
      uVar6 = uVar10;
    }
    bVar11 = uVar12 <= uVar10 && (local_20 == 0 && param_2 == 4);
    FUN_1012a720(iVar15,uVar5,uVar6 + uVar5,bVar11);
    *(int *)(iVar15 + 0x3c) = *(int *)(iVar15 + 0x3c) + uVar6;
    FUN_1012b0b0((int)param_1);
    cVar4 = bVar11 * '\x02';
  }
  return cVar4;
}
