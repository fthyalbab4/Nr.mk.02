// rea decompile_all
// name: FUN_100c0bd0
// address: 0x100c0bd0
// body: available
// range: 0x100c0bd0-0x100c0bf8 inclusive
// range: 0x100c0c00-0x100c0c2e inclusive
// range: 0x100c0c30-0x100c0d7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c0bd0(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  HANDLE hHeap;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  LPVOID local_1c;

  uVar7 = 0;
  uVar1 = *param_1;
  uVar2 = param_1[0x10];
  puVar8 = (undefined4 *)param_1[0x11];
  local_1c = (LPVOID)0x0;
  uVar4 = param_1[0x10];
LAB_100c0c07:
  while (uVar6 = uVar4 >> 1 & 0x3f, uVar6 == 0x3f) {
    if (uVar7 < 7) {
      uVar4 = 1;
      do {
        uVar6 = uVar4 >> ((byte)uVar7 & 0x1f);
        uVar4 = uVar4 + 1;
      } while (uVar6 == 0);
LAB_100c0c00:
      uVar7 = uVar7 + 1;
    }
    else {
      SwitchToThread();
      if (uVar7 < 0xb) goto LAB_100c0c00;
    }
    puVar8 = (undefined4 *)param_1[0x11];
    uVar4 = param_1[0x10];
  }
  if (uVar6 == 0x3e) {
    if ((local_1c == (LPVOID)0x0) && (local_1c = FUN_10107380(8,0x2f8), local_1c == (LPVOID)0x0)) {
      FUN_1013679e(4,0x2f8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    LOCK();
    uVar5 = param_1[0x10];
    bVar10 = uVar4 == uVar5;
    if (bVar10) {
      param_1[0x10] = uVar4 + 2;
      uVar5 = uVar4;
    }
    UNLOCK();
    if (bVar10) goto LAB_100c0cdc;
  }
  else {
    LOCK();
    uVar5 = param_1[0x10];
    bVar10 = uVar4 == uVar5;
    if (bVar10) {
      param_1[0x10] = uVar4 + 2;
      uVar5 = uVar4;
    }
    UNLOCK();
    if (bVar10) {
      puVar8[uVar6 * 3 + 1] = param_2;
      puVar8[uVar6 * 3 + 2] = param_3;
      LOCK();
      puVar8[uVar6 * 3 + 3] = puVar8[uVar6 * 3 + 3] | 1;
      UNLOCK();
      if (local_1c != (LPVOID)0x0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,local_1c);
      }
      goto LAB_100c0d10;
    }
  }
  puVar8 = (undefined4 *)param_1[0x11];
  uVar4 = 6;
  uVar6 = 1;
  if (uVar7 < 6) {
    uVar4 = uVar7;
  }
  do {
    uVar9 = uVar6 >> ((byte)uVar4 & 0x1f);
    uVar6 = uVar6 + 1;
  } while (uVar9 == 0);
  uVar7 = uVar7 + (uVar7 < 7);
  uVar4 = uVar5;
  goto LAB_100c0c07;
LAB_100c0cdc:
  param_1[0x11] = (uint)local_1c;
  param_1[0x10] = uVar4 + 4;
  *puVar8 = local_1c;
  puVar8[0xbb] = param_2;
  puVar8[0xbc] = param_3;
  LOCK();
  puVar8[0xbd] = puVar8[0xbd] | 1;
  UNLOCK();
LAB_100c0d10:
  do {
    uVar4 = param_1[0x2e];
    if ((uVar4 & 0x10000) != 0) {
      uVar7 = uVar4;
      if ((uVar4 & 0xff) == 0) {
        return;
      }
      goto LAB_100c0d45;
    }
    LOCK();
    bVar10 = uVar4 == param_1[0x2e];
    if (bVar10) {
      param_1[0x2e] = uVar4 | 0x10000;
    }
    UNLOCK();
  } while (!bVar10);
  uVar7 = uVar4 | 0x10000;
  if ((uVar4 & 0xff) != 0) {
LAB_100c0d45:
    if ((1 < (uVar2 ^ uVar1)) || ((uVar7 >> 8 & 0xff) == (uVar4 & 0xff))) {
      FUN_10139520((int)(param_1 + 0x2b),1);
    }
  }
  return;
}
