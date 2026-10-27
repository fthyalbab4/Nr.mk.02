// rea decompile_all
// name: FUN_1010dc70
// address: 0x1010dc70
// body: available
// range: 0x1010dc70-0x1010de58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1010dc70(int param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined3 uVar2;

  uVar2 = (undefined3)((uint)in_EAX >> 8);
  uVar1 = CONCAT31(uVar2,1);
  if (param_1 < 0x461) {
    if (param_1 < 0x150) {
      switch(param_1) {
      case 2:
      case 3:
      case 0xf:
      case 0x35:
      case 0x43:
        return 0;
      case 5:
switchD_1010dca3_caseD_5:
        return uVar1;
      case 8:
      case 0xe:
        return CONCAT31(uVar2,0x26);
      case 0x11:
        return CONCAT31(uVar2,0x1f);
      case 0x13:
        return CONCAT31(uVar2,0x11);
      case 0x27:
      case 0x70:
        return CONCAT31(uVar2,0x18);
      case 0x50:
      case 0xb7:
        return CONCAT31(uVar2,0xc);
      case 0x57:
switchD_1010dca3_caseD_57:
        return CONCAT31(uVar2,0x14);
      case 0x6d:
      case 0xe8:
switchD_1010dca3_caseD_6d:
        return CONCAT31(uVar2,0xb);
      case 0x78:
        return CONCAT31(uVar2,0x24);
      case 0x79:
      case 0x102:
        goto switchD_1010dca3_caseD_79;
      case 0x7b:
      case 0xa1:
      case 0xce:
        return CONCAT31(uVar2,0x21);
      case 0x84:
        return CONCAT31(uVar2,0x19);
      case 0x91:
        return CONCAT31(uVar2,0x10);
      case 0xaa:
        return CONCAT31(uVar2,0x1c);
      case 0xdf:
        return CONCAT31(uVar2,0x1b);
      case 0x10b:
        return CONCAT31(uVar2,0xe);
      }
    }
    else if (param_1 < 0x3e3) {
      if (param_1 == 0x150) {
        return CONCAT31(uVar2,0xf);
      }
      if (param_1 == 0x252) goto switchD_1010dca3_caseD_79;
    }
    else if ((param_1 == 0x3e3) || (param_1 == 0x41d)) goto switchD_1010dca3_caseD_79;
  }
  else if (param_1 < 0x271d) {
    if (param_1 < 0x781) {
      if (param_1 < 0x4cf) {
        if (param_1 == 0x461) goto switchD_1010dca3_caseD_79;
        if (param_1 == 0x46b) {
          return CONCAT31(uVar2,0x1e);
        }
        if (param_1 == 0x476) {
          return CONCAT31(uVar2,0x20);
        }
      }
      else if (param_1 < 0x50f) {
        if (param_1 == 0x4cf) goto switchD_1010dcc7_caseD_2743;
        if (param_1 == 0x4d0) goto switchD_1010dcc7_caseD_2751;
      }
      else {
        if (param_1 == 0x50f) goto switchD_1010dcc7_caseD_2755;
        if (param_1 == 0x5b4) goto switchD_1010dca3_caseD_79;
      }
    }
    else if (param_1 < 0x1b80) {
      if (param_1 == 0x781) {
        return CONCAT31(uVar2,0x12);
      }
      if ((param_1 == 0x1716) || (param_1 == 0x1b64)) goto switchD_1010dca3_caseD_79;
    }
    else if (param_1 < 0x2022) {
      if ((param_1 == 0x1b80) || (param_1 == 0x1f4e)) goto switchD_1010dca3_caseD_79;
    }
    else if ((param_1 == 0x2022) || (param_1 == 0x25e9)) goto switchD_1010dca3_caseD_79;
  }
  else {
    switch(param_1) {
    case 0x271d:
      goto switchD_1010dca3_caseD_5;
    case 0x271e:
    case 0x271f:
    case 0x2720:
    case 0x2721:
    case 0x2722:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x2727:
    case 0x2728:
    case 0x2729:
    case 0x272a:
    case 0x272b:
    case 0x272c:
    case 0x272d:
    case 0x272e:
    case 0x272f:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2734:
    case 0x2735:
    case 0x2736:
    case 0x2737:
    case 0x2738:
    case 0x2739:
    case 0x273a:
    case 0x273b:
    case 0x273c:
    case 0x273d:
    case 0x273e:
    case 0x273f:
    case 0x2744:
    case 0x2747:
    case 0x2748:
    case 0x274b:
    case 0x274e:
    case 0x274f:
    case 0x2750:
    case 0x2752:
    case 0x2753:
    case 0x2754:
      break;
    case 0x2726:
      goto switchD_1010dca3_caseD_57;
    case 0x2733:
      return CONCAT31(uVar2,0xd);
    case 0x2740:
      return CONCAT31(uVar2,8);
    case 0x2741:
      return CONCAT31(uVar2,9);
    case 0x2742:
      return CONCAT31(uVar2,10);
    case 0x2743:
switchD_1010dcc7_caseD_2743:
      return CONCAT31(uVar2,5);
    case 0x2745:
      return CONCAT31(uVar2,6);
    case 0x2746:
      return CONCAT31(uVar2,3);
    case 0x2749:
      return CONCAT31(uVar2,7);
    case 0x274a:
      goto switchD_1010dca3_caseD_6d;
    case 0x274c:
switchD_1010dca3_caseD_79:
      return CONCAT31((int3)(uVar1 >> 8),0x16);
    case 0x274d:
      return CONCAT31(uVar2,2);
    case 0x2751:
switchD_1010dcc7_caseD_2751:
      return CONCAT31(uVar2,4);
    case 0x2755:
switchD_1010dcc7_caseD_2755:
      return CONCAT31(uVar2,0x1a);
    default:
      uVar1 = param_1 - 0x3c2a;
      if ((uVar1 < 2) || (param_1 == 0x35ed)) goto switchD_1010dca3_caseD_79;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),0x29);
}
