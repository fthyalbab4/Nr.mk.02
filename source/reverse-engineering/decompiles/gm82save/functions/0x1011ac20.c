// rea decompile_all
// name: FUN_1011ac20
// address: 0x1011ac20
// body: available
// range: 0x1011ac20-0x1011ae0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011ac20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined8 local_50;
  HANDLE local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;

  local_34 = 0;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  local_2c = 0x18;
  pvVar4 = DAT_101633b0;
  if (DAT_101633b0 == (HANDLE)0x0) {
    puStack_64 = &local_38;
    local_28 = ZEXT48(&local_50) << 0x20;
    local_44 = (HANDLE)0x0;
    local_50 = 0x10158ce800260024;
    uStack_60 = 3;
    iVar2 = NtOpenFile();
    if (iVar2 < 0) {
      uStack_60 = 0x1011adfb;
      uVar1 = RtlNtStatusToDosError();
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[2] = uVar1;
      *param_1 = 1;
      return;
    }
    LOCK();
    bVar5 = DAT_101633b0 == (HANDLE)0x0;
    pvVar3 = DAT_101633b0;
    if (bVar5) {
      DAT_101633b0 = local_44;
      pvVar3 = (HANDLE)0x0;
    }
    UNLOCK();
    pvVar4 = local_44;
    if (!bVar5) {
      uStack_60 = 0x1011adb0;
      CloseHandle(local_44);
      pvVar4 = pvVar3;
    }
  }
  local_40 = 0;
  local_44 = (HANDLE)0x0;
  local_50 = 0xfffffffffff85ee0;
  local_3c = 0;
  uVar1 = 0x40100000;
  local_28 = CONCAT44(&local_44,pvVar4);
  if ((char)param_2 != '\0') {
    uVar1 = 0x80100000;
  }
  uStack_60 = 0x10000;
  puStack_64 = (undefined4 *)0x10000;
  puVar6 = &local_3c;
  local_30 = param_2;
  iVar2 = NtCreateNamedPipeFile(puVar6,uVar1);
  if (iVar2 < 0) {
    uVar1 = RtlNtStatusToDosError(iVar2);
    *(undefined1 *)(puVar6 + 1) = 0;
    puVar6[2] = uVar1;
    *puVar6 = 1;
  }
  else {
    uStack_60 = 0;
    iVar2 = NtOpenFile();
    if (iVar2 < 0) {
      RtlNtStatusToDosError(iVar2);
                    /* WARNING: Ignoring partial resolution of indirect */
      CloseHandle((HANDLE)0x0);
    }
    else {
      uRam40100084 = 0;
      uRam40100080 = 0;
      ppuRam40100088 = &puStack_64;
    }
  }
  return;
}
