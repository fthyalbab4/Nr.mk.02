// rea decompile_all
// name: FUN_100db7d0
// address: 0x100db7d0
// body: available
// range: 0x100db7d0-0x100dbbaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100db7d0(undefined4 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  LPVOID lpMem;
  code *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  HANDLE pvVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  uint local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  iVar3 = param_2[3];
  if (iVar3 == 0) {
    local_40 = 0;
    local_3c = 1;
    local_38 = 0;
    uStack_34 = CONCAT31(uStack_34._1_3_,1);
    FUN_100eb4b0(&local_40);
    iVar3 = local_3c;
    if (local_38 == 0) {
      bVar11 = 1;
    }
    else {
      bVar11 = (byte)~*(byte *)(local_3c + -1 + local_38 * 2) >> 7;
    }
    uVar12 = (uint)(local_38 != 0);
    local_24 = local_40;
    local_20 = local_38;
    uStack_1c = uStack_34;
    uStack_18 = 0;
    uStack_14 = 0;
    puVar8 = FUN_10107380(0,0x34);
    if (puVar8 == (uint *)0x0) goto LAB_100dbb7b;
    *puVar8 = uVar12;
    puVar8[1] = 1;
    puVar8[2] = uVar12;
    puVar8[3] = 1;
    puVar8[4] = 1;
    puVar8[0xb] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    *(byte *)(puVar8 + 0xc) = bVar11;
    *(undefined2 *)((int)puVar8 + 0x31) = 0;
    param_1[1] = 1;
    param_1[2] = local_24;
    param_1[3] = iVar3;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_1c,local_20);
    *param_1 = 2;
    iVar3 = param_2[1];
    param_1[6] = puVar8;
joined_r0x100dbb70:
    if (iVar3 != 0) {
      lpMem = (LPVOID)param_2[2];
      pvVar10 = GetProcessHeap();
      HeapFree(pvVar10,0,lpMem);
    }
  }
  else {
    if (*param_2 == 1) {
      pcVar4 = (char *)param_2[2];
      if ((iVar3 == 1) && (*pcVar4 == pcVar4[1])) {
        uVar12 = 1;
        pcVar7 = FUN_10107380(0,1);
        if (pcVar7 == (char *)0x0) {
          FUN_1013679e(1,1);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *pcVar7 = *pcVar4;
        local_30 = 1;
        local_28 = 1;
        local_2c = pcVar7;
        goto LAB_100dba57;
      }
      iVar13 = 1;
      local_44 = 1;
      bVar11 = (byte)~pcVar4[iVar3 * 2 + -1] >> 7;
    }
    else {
      puVar8 = (uint *)param_2[2];
      FUN_100ef730((undefined8 *)&local_30,puVar8,iVar3);
      uVar12 = local_28;
      pcVar7 = local_2c;
      if (local_30 != 0xffffffff) {
        if (local_28 < local_30) {
          pvVar10 = GetProcessHeap();
          if (uVar12 == 0) {
            HeapFree(pvVar10,0,pcVar7);
LAB_100dbb1f:
            puVar9 = FUN_10107380(0,0x34);
            if (puVar9 == (undefined4 *)0x0) goto LAB_100dbb7b;
            *puVar9 = 1;
            puVar9[1] = 0;
            puVar9[2] = 1;
            puVar9[3] = 0;
            puVar9[4] = 1;
            puVar9[0xb] = 0;
            *(undefined8 *)(puVar9 + 5) = 0;
            *(undefined8 *)(puVar9 + 7) = 0;
            *(undefined8 *)(puVar9 + 9) = 0;
            *(undefined2 *)(puVar9 + 0xc) = 1;
            *(undefined1 *)((int)puVar9 + 0x32) = 0;
            *param_1 = 0;
            iVar3 = param_2[1];
            param_1[6] = puVar9;
            goto joined_r0x100dbb70;
          }
          pcVar7 = HeapReAlloc(pvVar10,0,pcVar7,uVar12);
          if (pcVar7 == (char *)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        else if (local_28 == 0) goto LAB_100dbb1f;
LAB_100dba57:
        FUN_10095490(&local_40,(int)pcVar7,uVar12);
        uVar6 = local_40;
        puVar9 = FUN_10107380(0,0x34);
        if (puVar9 == (undefined4 *)0x0) goto LAB_100dbb7b;
        *puVar9 = 1;
        puVar9[1] = uVar12;
        puVar9[2] = 1;
        puVar9[3] = uVar12;
        puVar9[4] = 1;
        puVar9[0xb] = 0;
        *(undefined8 *)(puVar9 + 5) = 0;
        *(undefined8 *)(puVar9 + 7) = 0;
        *(undefined8 *)(puVar9 + 9) = 0;
        *(byte *)(puVar9 + 0xc) = (byte)uVar6 ^ 1;
        *(undefined2 *)((int)puVar9 + 0x31) = 0x101;
        *param_1 = 1;
        param_1[1] = pcVar7;
        param_1[2] = uVar12;
        iVar3 = param_2[1];
        param_1[6] = puVar9;
        goto joined_r0x100dbb70;
      }
      uVar12 = *puVar8;
      local_44 = 1;
      if ((0x7f < uVar12) && (local_44 = 2, 0x7ff < uVar12)) {
        local_44 = 4 - (uint)(uVar12 < 0x10000);
      }
      uVar12 = puVar8[iVar3 * 2 + -1];
      bVar11 = 1;
      if (uVar12 < 0x80) {
        iVar13 = 1;
      }
      else {
        iVar13 = 2;
        if (0x7ff < uVar12) {
          iVar13 = 4 - (uint)(uVar12 < 0x10000);
        }
      }
    }
    puVar9 = FUN_10107380(0,0x34);
    if (puVar9 == (undefined4 *)0x0) {
LAB_100dbb7b:
      FUN_1013679e(4,0x34);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *puVar9 = 1;
    puVar9[1] = local_44;
    puVar9[2] = 1;
    puVar9[3] = iVar13;
    puVar9[4] = 1;
    *(undefined8 *)(puVar9 + 5) = 0;
    *(undefined8 *)(puVar9 + 7) = 0;
    *(undefined8 *)(puVar9 + 9) = 0;
    puVar9[0xb] = 0;
    *(byte *)(puVar9 + 0xc) = bVar11;
    *(undefined2 *)((int)puVar9 + 0x31) = 0;
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    param_1[5] = param_2[4];
    *(undefined8 *)(param_1 + 3) = uVar2;
    *(undefined8 *)(param_1 + 1) = uVar1;
    *param_1 = 2;
    param_1[6] = puVar9;
  }
  return;
}
