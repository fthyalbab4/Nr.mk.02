// rea decompile_all
// name: FUN_00607868
// address: 0x607868
// body: available
// range: 0x607868-0x607b36 inclusive
// range: 0x607b41-0x607b5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60790b (push 0x607b37 followed by fs-segment stack chaining); handler 0x607b37 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006079d2) */

void FUN_00607868(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_c;
  int local_8;

  iVar1 = *(int *)PTR_DAT_00688c4c;
  if (iVar1 < -199) {
    if (iVar1 == -200) {
      puStack_54 = (undefined1 *)0x6078ad;
      FUN_006070f0();
      puStack_54 = (undefined1 *)0x6078b2;
      FUN_00607034();
      goto LAB_006078c7;
    }
    if (iVar1 == -400) goto LAB_0060789b;
    if (iVar1 == -300) {
      puStack_54 = (undefined1 *)0x6078b9;
      FUN_0060714c();
      goto LAB_006078c7;
    }
  }
  else {
    if (iVar1 == -100) {
LAB_0060789b:
      *PTR_PTR_0068927c = 0;
      return;
    }
    if (iVar1 == -1) goto LAB_006078c7;
  }
  puStack_54 = (undefined1 *)0x6078c7;
  FUN_0060701c(*(undefined4 *)PTR_DAT_00688c4c);
LAB_006078c7:
  puStack_54 = (undefined1 *)0x6078cc;
  FUN_005610e0();
  puStack_54 = (undefined1 *)0x6078d1;
  local_24 = FUN_00561128();
  *(undefined4 *)PTR_DAT_0068892c = 0;
  local_28 = 0;
  puStack_54 = (undefined1 *)0x6078f6;
  FUN_00628b78();
  puStack_54 = (undefined1 *)0x6078fb;
  FUN_00570fe0();
  local_20 = extraout_EDX;
  local_c = local_24;
  local_8 = extraout_EDX;
  do {
    uVar2 = local_28;
    if (*PTR_PTR_0068927c == '\0') {
      return;
    }
    if (*PTR_PTR_00689578 != '\0') {
      return;
    }
    puStack_58 = &LAB_00607b37;
    uStack_5c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_5c;
    puStack_54 = &stack0xfffffffc;
    FUN_0060756c();
    if ((*(int *)PTR_DAT_00688c4c == -1) && (*PTR_DAT_006891d0 != '\0')) {
      FUN_0061ff5c();
      if (*PTR_DAT_00688a38 != '\0') {
        FUN_00561afc();
        FUN_0061f9f4();
        *PTR_DAT_00688a38 = 0;
      }
      FUN_0061ff3c();
    }
    uVar3 = FUN_00561128();
    if (extraout_EDX_00 == local_8) {
      if (uVar3 < local_c) {
LAB_0060796c:
        local_c = uVar3;
        local_8 = extraout_EDX_00;
      }
    }
    else if (extraout_EDX_00 < local_8) goto LAB_0060796c;
    if (*(int *)(*(int *)PTR_DAT_0068939c + 8) < 1) {
      *(undefined4 *)(*(int *)PTR_DAT_0068939c + 8) = 1;
    }
    uVar4 = (uint)(1000000 / (longlong)*(int *)(*(int *)PTR_DAT_0068939c + 8));
    local_3c = uVar4 - (uVar3 - local_c);
    local_38 = (((int)uVar4 >> 0x1f) - ((extraout_EDX_00 - local_8) - (uint)(uVar3 < local_c))) -
               (uint)(uVar4 < uVar3 - local_c);
    if ((local_38 != 0) && (local_38 < 0)) {
      local_3c = 0;
      local_38 = 0;
    }
    if (local_38 == 0) {
      if (999999 < local_3c) goto LAB_00607a1f;
LAB_00607a11:
      local_44 = local_3c;
      local_40 = local_38;
    }
    else {
      if (local_38 < 0) goto LAB_00607a11;
LAB_00607a1f:
      local_44 = 1000000;
      local_40 = 0;
    }
    FUN_005611b4();
    local_c = uVar3 + local_44;
    local_8 = extraout_EDX_00 + local_40 + (uint)CARRY4(uVar3,local_44);
    if (local_8 == local_20) {
      if (local_c < local_24) {
LAB_00607a6a:
        local_24 = local_c;
        local_20 = local_8;
      }
    }
    else if (local_8 < local_20) goto LAB_00607a6a;
    uVar3 = FUN_0040976c(local_c,local_8);
    uVar4 = FUN_0040976c(local_24,local_20);
    if (extraout_EDX_02 == extraout_EDX_01) {
      if (uVar4 < uVar3) {
LAB_00607aaf:
        *(uint *)PTR_DAT_0068892c = local_28;
        local_28 = 0;
        uVar3 = uVar2;
        local_24 = local_c;
        local_20 = local_8;
      }
    }
    else if (extraout_EDX_02 < extraout_EDX_01) goto LAB_00607aaf;
    local_28 = local_28 + 1;
    iVar1 = *(int *)PTR_DAT_00688c4c;
    if (iVar1 < -199) {
      if (iVar1 == -200) {
        FUN_006070f0(0xffffff38,uVar3);
        FUN_00607034();
      }
      else {
        if (iVar1 == -400) goto LAB_00607af7;
        if (iVar1 != -300) goto LAB_00607b1c;
        FUN_0060714c();
      }
    }
    else {
      if (iVar1 == -100) {
LAB_00607af7:
        *PTR_PTR_0068927c = 0;
        *in_FS_OFFSET = uStack_5c;
        return;
      }
      if (iVar1 != -1) {
LAB_00607b1c:
        FUN_0060701c(*(undefined4 *)PTR_DAT_00688c4c);
      }
    }
    FUN_00628b78();
    *in_FS_OFFSET = uStack_5c;
  } while( true );
}
