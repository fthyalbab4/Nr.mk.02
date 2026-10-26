// rea decompile_all
// name: FUN_1010f430
// address: 0x1010f430
// body: available
// range: 0x1010f430-0x1010f5ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010f430(uint *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  LARGE_INTEGER local_50;
  int local_48;
  uint local_3c;
  int local_38;
  uint local_34;
  uint *local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;

  lVar11 = DAT_101633b8;
  local_30 = param_2;
  local_2c = param_1;
  if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
    lVar11 = FUN_1013c290();
  }
  uVar9 = (uint)((ulonglong)lVar11 >> 0x20);
  uVar7 = (uint)lVar11;
  local_50.QuadPart = 0.0;
  BVar5 = QueryPerformanceCounter(&local_50);
  if (BVar5 != 0) {
    uVar4 = local_50.s.LowPart;
    local_3c = local_50.s.HighPart;
    uVar10 = __aulldiv(local_50.s.LowPart,local_50.s.HighPart,uVar7,uVar9);
    local_38 = (int)(uVar10 >> 0x20) * 1000000000;
    uVar6 = (uint)(lVar11 * uVar10);
    lVar1 = (uVar10 & 0xffffffff) * 1000000000;
    iVar8 = (int)((ulonglong)lVar1 >> 0x20) + local_38;
    lVar2 = (ulonglong)(uVar4 - uVar6) * 1000000000;
    local_34 = uVar7;
    lVar11 = __aulldiv((uint)lVar2,
                       (int)((ulonglong)lVar2 >> 0x20) +
                       ((local_3c - (int)(lVar11 * uVar10 >> 0x20)) - (uint)((uint)uVar4 < uVar6)) *
                       1000000000,uVar7,uVar9);
    lVar11 = lVar11 + CONCAT44(iVar8,(int)lVar1) + 0x3fffffffffffffff;
    uVar9 = (uint)lVar11;
    local_50 = (LARGE_INTEGER)__aulldiv(uVar9,(uint)((ulonglong)lVar11 >> 0x20),1000000000,0);
    local_48 = uVar9 + local_50.s.LowPart * -1000000000;
    FUN_1010e3b0(&local_28,(uint *)&local_50,*local_30,local_30[1],local_30[2]);
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 0;
    if (local_20 != 0xffffffff) {
      uVar9 = local_24;
      uVar7 = local_28;
      uVar6 = local_20;
    }
    *local_2c = uVar7;
    local_2c[1] = uVar9;
    local_2c[2] = uVar6;
    return;
  }
  local_24 = GetLastError();
  local_28 = 0;
  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_101569a8,
               &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
