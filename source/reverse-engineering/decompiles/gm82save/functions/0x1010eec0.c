// rea decompile_all
// name: FUN_1010eec0
// address: 0x1010eec0
// body: available
// range: 0x1010eec0-0x1010efe4 inclusive
// range: 0x1010eff0-0x1010f002 inclusive
// range: 0x1010f010-0x1010f074 inclusive
// range: 0x1010f080-0x1010f20e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_1010eec0(DWORD *param_1,uint param_2)

{
  WCHAR WVar1;
  bool bVar2;
  code *lpMem;
  HMODULE pHVar3;
  code *pcVar4;
  HANDLE hHeap;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  DWORD *pDVar8;
  ushort *puVar9;
  HMODULE lpSource;
  uint uVar10;
  LPWSTR pWVar11;
  LPWSTR pWVar12;
  DWORD dwFlags;
  uint uVar13;
  uint *local_1034;
  code *local_1030;
  DWORD *local_102c;
  code *local_1028;
  DWORD *local_1024;
  uint local_1020;
  LPWSTR local_101c;
  LPWSTR local_1018;
  DWORD local_1014;
  WCHAR local_1010 [2046];
  undefined4 uStack_14;

  uStack_14 = 0x1010eece;
  local_1024 = param_1;
  local_1020 = param_2;
  memset(local_1010,0,0x1000);
  dwFlags = 0x1200;
  lpSource = (HMODULE)0x0;
  if (((param_2 & 0x10000000) != 0) &&
     (pHVar3 = GetModuleHandleW((LPCWSTR)"N"), pHVar3 != (HMODULE)0x0)) {
    param_2 = param_2 & 0xefffffff;
    dwFlags = 0x1a00;
    lpSource = pHVar3;
    local_1020 = param_2;
  }
  local_1034 = (uint *)FormatMessageW(dwFlags,lpSource,param_2,0,local_1010,0x800,(va_list *)0x0);
  if (local_1034 == (uint *)0x0) {
    local_1014 = GetLastError();
    puVar9 = (ushort *)&DAT_10158b34;
    local_102c = &local_1014;
    local_1028 = FUN_1009c910;
  }
  else {
    if ((uint *)0x800 < local_1034) {
      FUN_10136a50(0,(uint)local_1034,0x800,&PTR_s_C__Users_runneradmin__rustup_too_10158c34);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pcVar4 = FUN_10107380(0,(SIZE_T)local_1034);
    if (pcVar4 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_101c = local_1010 + (int)local_1034;
    local_102c = (DWORD *)0x0;
    pWVar11 = local_1010;
    local_1030 = pcVar4;
    do {
      pDVar8 = local_102c;
      lpMem = local_1030;
      uVar10 = (uint)(ushort)*pWVar11;
      pWVar12 = pWVar11 + 1;
      if ((uVar10 & 0xf800) == 0xd800) {
        if (((0xdbff < uVar10) || (pWVar12 == local_101c)) ||
           (WVar1 = *pWVar12, ((ushort)WVar1 + 0x2000 & 0xffff) < 0xfc00)) {
          if (local_1034 != (uint *)0x0) {
            hHeap = GetProcessHeap();
            HeapFree(hHeap,0,lpMem);
          }
          goto LAB_1010f195;
        }
        pWVar12 = pWVar11 + 2;
        uVar10 = (uVar10 & 0x3ff) * 0x400 + 0x10000 + ((ushort)WVar1 & 0x3ff);
LAB_1010f025:
        uVar13 = 4 - (uVar10 < 0x10000);
        bVar2 = false;
      }
      else if (uVar10 < 0x80) {
        uVar13 = 1;
        bVar2 = true;
      }
      else {
        if (0x7ff < uVar10) goto LAB_1010f025;
        uVar13 = 2;
        bVar2 = false;
      }
      if ((uint)((int)local_1034 - (int)local_102c) < uVar13) {
        FUN_101366d0((SIZE_T *)&local_1034,(uint)local_102c,uVar13);
        pcVar4 = local_1030;
        if (bVar2) goto LAB_1010ef70;
LAB_1010f04b:
        bVar5 = (byte)uVar10 & 0x3f | 0x80;
        bVar6 = (byte)(uVar10 >> 6);
        if (uVar10 < 0x800) {
          *(byte *)((int)pcVar4 + (int)pDVar8) = bVar6 | 0xc0;
          *(byte *)((int)pcVar4 + 1U + (int)pDVar8) = bVar5;
        }
        else {
          bVar7 = bVar6 & 0x3f | 0x80;
          bVar6 = (byte)(uVar10 >> 0xc);
          if (uVar10 < 0x10000) {
            *(byte *)((int)pcVar4 + (int)pDVar8) = bVar6 | 0xe0;
            *(byte *)((int)pcVar4 + 1U + (int)pDVar8) = bVar7;
            *(byte *)((int)pcVar4 + 2U + (int)pDVar8) = bVar5;
          }
          else {
            *(byte *)((int)pcVar4 + (int)pDVar8) = (byte)(uVar10 >> 0x12) | 0xf0;
            *(byte *)((int)pcVar4 + 1U + (int)pDVar8) = bVar6 & 0x3f | 0x80;
            *(byte *)((int)pcVar4 + 2U + (int)pDVar8) = bVar7;
            *(byte *)((int)pcVar4 + 3U + (int)pDVar8) = bVar5;
            local_1018 = pWVar12;
          }
        }
      }
      else {
        if (!bVar2) goto LAB_1010f04b;
LAB_1010ef70:
        *(byte *)((int)pcVar4 + (int)pDVar8) = (byte)uVar10;
      }
      local_102c = (DWORD *)(uVar13 + (int)pDVar8);
      pWVar11 = pWVar12;
    } while (pWVar12 != local_101c);
    pDVar8 = local_102c;
    if (local_1034 != (uint *)0xffffffff) {
      while ((uVar10 = *(byte *)(((int)local_1030 - 1U) + (int)pDVar8) - 9, uVar10 < 0x18 &&
             ((0x80001bU >> (uVar10 & 0x1f) & 1) != 0))) {
        pDVar8 = (DWORD *)((int)pDVar8 - 1);
        if (pDVar8 == (DWORD *)0x0) {
          pDVar8 = (DWORD *)0x0;
LAB_1010f187:
          *local_1024 = (DWORD)local_1034;
          local_1024[1] = (DWORD)local_1030;
          local_1024[2] = (DWORD)pDVar8;
          return;
        }
      }
      if ((pDVar8 < local_102c) && (*(char *)((int)local_1030 + (int)pDVar8) < -0x40)) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10158bec);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_1010f187;
    }
LAB_1010f195:
    puVar9 = (ushort *)&DAT_10158bfc;
  }
  local_1034 = &local_1020;
  local_1030 = FUN_1009c910;
  FUN_10093970((undefined8 *)local_1024,puVar9,(uint)&local_1034);
  return;
}
